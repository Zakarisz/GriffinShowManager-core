#ifndef TRACK_H
#define	TRACK_H

#include <string>

class Track{
public:
    std::string title;
    std::string location;
    std::string annotation;
    int trackNum;
    int duration; // ms
};

#endif	/* TRACK_H */
