#ifndef TRACKTEST_H
#define TRACKTEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class PlaylistTest : public CppUnit::TestFixture
{
        CPPUNIT_TEST_SUITE( PlaylistTest );
        CPPUNIT_TEST( testTitle );
        CPPUNIT_TEST( testEmptyList );
        CPPUNIT_TEST( testAddTrack );
        CPPUNIT_TEST_SUITE_END();

        public:
                //~ Call before tests
                void setUp(void) {}

                //~ Call after tests
                void tearDown(void) {}

                // Tests
                void testTitle(void);
                void testEmptyList(void);
                void testAddTrack(void);
};

#endif
