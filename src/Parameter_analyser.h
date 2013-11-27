#ifndef H__Parameter_analyser__
#define H__Parameter_analyser__

#include <map>
#include <string>

class Parameter_analyser{
public:
	Parameter_analyser();
	Parameter_analyser(int, char**);
	std::map<std::string, bool> data;
};

#endif
