/** @file hcsr04.c
*
* @brief A driver for the hc-sr04 ultrasonic sensor.
*
* @par
*
*/

#include "hcsr04.h"

uint16_t hcsr04_get_distance(uint32_t rising_time, uint32_t falling_time, uint32_t clock_speed, uint32_t clock_period)
{
    uint32_t ticks = falling_time < rising_time ? (clock_period - rising_time) + falling_time : falling_time - rising_time;
    return (ticks * SPEED_OF_SOUND * CENTIMETERS / 2 / clock_speed);
}

/*** end of file ***/
