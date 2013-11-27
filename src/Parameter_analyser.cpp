#include <vector>
#include <iostream>

#include "Parameter_analyser.h"

Parameter_analyser::Parameter_analyser(){
}

/**
 * parses the command line and store the argument into data
 */
Parameter_analyser::Parameter_analyser(int argc, char **argv){    
    std::vector<std::string> command_line;
    for (int i=1; i<argc; i++)
            command_line.push_back(std::string(argv[i]));

    // set the default values
    data["foo"] = false;

    // parsing
    std::vector<std::string>::iterator i;
    for (i=command_line.begin(); i!=command_line.end(); i++){
            if (*i == "--foo")
                    data["foo"] = true;
    }
}
