#include "TrackTest.h"
#include <cppunit/extensions/HelperMacros.h>
#include "../src/Track.h"

CPPUNIT_TEST_SUITE_REGISTRATION( TrackTest );

void TrackTest::testTitle(void)
{
    Track myTrack;
    std::string testTitle = "title";

    myTrack.title = testTitle;
    CPPUNIT_ASSERT(myTrack.title == testTitle);
}

void TrackTest::testLocation(void)
{
    Track myTrack;
    std::string testLocation = "location";

    myTrack.location = testLocation;
    CPPUNIT_ASSERT(myTrack.location == testLocation);
}

void TrackTest::testAnnotation(void)
{
    Track myTrack;
    std::string testAnnotation = "annotation";

    myTrack.annotation = testAnnotation;
    CPPUNIT_ASSERT(myTrack.annotation == testAnnotation);
}

void TrackTest::testTrackNum(void)
{
    Track myTrack;
    unsigned int testTrackNum = 1;

    myTrack.trackNum = testTrackNum;
    CPPUNIT_ASSERT(myTrack.trackNum == testTrackNum);
}

void TrackTest::testDuration(void)
{
    Track myTrack;
    unsigned int testDuration = 600000;

    myTrack.duration = testDuration;
    CPPUNIT_ASSERT(myTrack.duration == testDuration);
}

