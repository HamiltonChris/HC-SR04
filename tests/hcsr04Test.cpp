/** @file hcsr04Test.cpp
*
* @brief Unit tests for the hc-sr04 driver module.
*
* @par
*
*/ 

extern "C"
{
#include "hcsr04.h"
}

#include "CppUTest/TestHarness.h"

#define CLOCK_SPEED 1000000
#define CLOCK_PERIOD 500000

TEST_GROUP(HCSR04)
{
    void setup()
    {

    }

    void teardown()
    {

    }
};

TEST(HCSR04, getDistance)
{
    uint16_t distance = 0;
    distance = hcsr04_get_distance(107000, 107900, CLOCK_SPEED, CLOCK_PERIOD);

    LONGS_EQUAL(15, distance);
}

TEST(HCSR04, getDistance2)
{
    uint16_t distance = 0;
    distance = hcsr04_get_distance(2000, 2655, CLOCK_SPEED, CLOCK_PERIOD);

    LONGS_EQUAL(11, distance);
}

TEST(HCSR04, ticksgreaterthanperiod)
{
    uint16_t distance = 0;
    distance = hcsr04_get_distance(CLOCK_PERIOD - 250, 250, CLOCK_SPEED, CLOCK_PERIOD);

    LONGS_EQUAL(8, distance);
}


/*** end of file ***/
