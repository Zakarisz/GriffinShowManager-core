#ifndef GSMCORE_SRC_TRACK_H_INCLUDED
#define	GSMCORE_SRC_TRACK_H_INCLUDED

#include <string>

class Track{
    public:
        std::string title;
        std::string location;
        std::string annotation;
        unsigned int trackNum;
        unsigned int duration; // ms
};

#endif

