#ifndef GSMCORE_TEST_TRACKTEST_H_INCLUDED
#define GSMCORE_TEST_TRACKTEST_H_INCLUDED

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class TrackTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(TrackTest);
    CPPUNIT_TEST(testTitle);
    CPPUNIT_TEST(testLocation);
    CPPUNIT_TEST(testAnnotation);
    CPPUNIT_TEST(testTrackNum);
    CPPUNIT_TEST(testDuration);
    CPPUNIT_TEST_SUITE_END();

    public:
        //~ Call before tests
        void setUp(void) {}

        //~ Call after tests
        void tearDown(void) {}

        // Tests
        void testTitle(void);
        void testLocation(void);
        void testAnnotation(void);
        void testTrackNum(void);
        void testDuration(void);
};

#endif

