#include "Configuration.h"
#include <iostream>
#include "../config.h"

int main(int argc, char** argv) {
    Configuration configuration(argc, argv);
    
    if (configuration.options["version"]) {
        std::cout << PACKAGE_NAME << " version " << PACKAGE_VERSION << std::endl;
    }
    return 0;
}

