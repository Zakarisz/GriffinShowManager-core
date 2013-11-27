#include <cppunit/extensions/HelperMacros.h>
#include "../src/Parameter_analyser.h"
#include "Parameter_analyserTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( ParameterAnalyserTest );

void ParameterAnalyserTest::testNoParam(void)
{
    int argc = 1;
    char **argv = new char*[1];
    argv[0] = "progname";
    Parameter_analyser myParameterAnalyser(argc, argv);
    CPPUNIT_ASSERT(myParameterAnalyser.data["foo"] == false);
}

void ParameterAnalyserTest::testFooParam(void)
{
    int argc = 2;
    char **argv = new char*[2];
    argv[0] = "progname";
    argv[1] = "--foo";
    Parameter_analyser myParameterAnalyser(argc, argv);
    CPPUNIT_ASSERT(myParameterAnalyser.data["foo"] == true);
}
