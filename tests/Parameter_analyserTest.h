#ifndef TRACKTEST_H
#define TRACKTEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class ParameterAnalyserTest : public CppUnit::TestFixture
{
        CPPUNIT_TEST_SUITE( ParameterAnalyserTest );
        CPPUNIT_TEST( testNoParam );
        CPPUNIT_TEST( testFooParam );
        CPPUNIT_TEST_SUITE_END();

        public:
                //~ Call before tests
                void setUp(void) {}

                //~ Call after tests
                void tearDown(void) {}

                // Tests
                void testNoParam(void);
                void testFooParam(void);
};

#endif
