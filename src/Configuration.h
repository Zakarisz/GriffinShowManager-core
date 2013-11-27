#ifndef GSMCORE_SRC_CONFIGURATION_H_INCLUDED
#define GSMCORE_SRC_CONFIGURATION_H_INCLUDED

#include <map>
#include <string>

class Configuration {
    public:
	    Configuration();
	    Configuration(int, char**);
	    std::map<std::string, bool> options;
	private:
	    void setDefaultValues();
};

#endif

