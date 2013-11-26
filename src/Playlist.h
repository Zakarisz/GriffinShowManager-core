#ifndef PLAYLIST_H
#define	PLAYLIST_H

#include "Track.h"
#include <string>
#include <list>

class Playlist{
public:
    std::string title;
    std::list<Track> trackList;
};

#endif	/* PLAYLIST_H */