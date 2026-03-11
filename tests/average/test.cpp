#include "CppUTest/TestHarness.h"

extern "C"
{
#include "average.h"
}

TEST_GROUP(average_test_group)
{
    void setup()
    {
        // Initialize before each test
    }

    void teardown()
    {
        // Deinitialize after each test
    }
};

// Test the average fucntion
TEST(average_test_group, simple_test)
{
    float arr[] = {-1.0, 0.0, 1.0, 2.0, 3.0};
    float avg = average(arr, 5);
    CHECK_EQUAL(1.0, avg);
}

// Test null array
TEST(average_test_group, null_test)
{
    float arr[1];
    float avg = average(arr, 0);
    CHECK_EQUAL(0.0, avg);
}