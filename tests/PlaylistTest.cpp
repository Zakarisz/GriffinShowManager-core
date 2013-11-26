#include <cppunit/extensions/HelperMacros.h>
#include "../src/Playlist.h"
#include "PlaylistTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( PlaylistTest );

void PlaylistTest::testTitle(void)
{
        Playlist myPlaylist;
        std::string testTitle = "title";

        myPlaylist.title = testTitle;
        CPPUNIT_ASSERT(myPlaylist.title == testTitle);
}

void PlaylistTest::testEmptyList(void)
{
        Playlist myPlaylist;
        CPPUNIT_ASSERT(0 == myPlaylist.trackList.size());
}

void PlaylistTest::testAddTrack(void)
{
        Playlist myPlaylist;
        Track myTrack;
        
        myPlaylist.trackList.push_back(myTrack);
        CPPUNIT_ASSERT(1 == myPlaylist.trackList.size());
}
