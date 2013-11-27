#include "ConfigurationTest.h"
#include <cppunit/extensions/HelperMacros.h>
#include "../src/Configuration.h"

CPPUNIT_TEST_SUITE_REGISTRATION( ConfigurationTest );

void ConfigurationTest::testNoParam(void)
{
    int argc = 1;
    char **argv = new char*[1];
    argv[0] = const_cast<char*>("./myprog");
    
    Configuration myConfiguration(argc, argv);
    CPPUNIT_ASSERT(myConfiguration.options["version"] == false);
}

void ConfigurationTest::testVersionParam(void)
{
    int argc = 2;
    char **argv = new char*[2];
    argv[0] = const_cast<char*>("./myprog");
    argv[1] = const_cast<char*>("--version");
    
    Configuration myConfiguration(argc, argv);
    CPPUNIT_ASSERT(myConfiguration.options["version"] == true);
}

