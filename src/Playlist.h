#ifndef GSMCORE_SRC_PLAYLIST_H_INCLUDED
#define	GSMCORE_SRC_PLAYLIST_H_INCLUDED

#include <string>
#include <list>
#include "Track.h"

class Playlist{
    public:
        std::string title;
        std::list<Track> trackList;
};

#endif

