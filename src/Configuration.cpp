#include "Configuration.h"

/**
 * Default constructor
 */
Configuration::Configuration(){
    setDefaultValues();
}

/**
 * Parses command line arguments and set the values into options.
 * Options not configured by the arguments have default values.
 */
Configuration::Configuration(int argc, char **argv){    
    setDefaultValues();
    
    for (int i = 1; i < argc; i++) {
        std::string argument = std::string(argv[i]);
        if (argument == "--version" || argument == "-v")
            options["version"] = true;
    }
}

/**
 * Set the default values
 */
void Configuration::setDefaultValues() {
    options["version"] = false;
}

