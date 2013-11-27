#ifndef GSMCORE_TEST_CONFIGURATIONTEST_H_INCLUDED
#define GSMCORE_TEST_CONFIGURATIONTEST_H_INCLUDED

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class ConfigurationTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( ConfigurationTest );
    CPPUNIT_TEST( testNoParam );
    CPPUNIT_TEST( testVersionParam );
    CPPUNIT_TEST_SUITE_END();

    public:
        //~ Call before tests
        void setUp(void) {}

        //~ Call after tests
        void tearDown(void) {}

        // Tests
        void testNoParam(void);
        void testVersionParam(void);
};

#endif

