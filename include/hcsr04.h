/** @file hcsr04.h
*
* @brief A driver for the hc-sr04 ultrasonic sensor.
*
* @par
*
*/

#ifndef HCSR04_H
#define HCSR04_H

#define SPEED_OF_SOUND 343 // micro-meters per micro-second
#define CENTIMETERS    100

#include <stdint.h>


uint16_t hcsr04_get_distance(uint32_t rising_time, uint32_t falling_time, uint32_t clock_speed, uint32_t clock_period);

#endif // HCSR04_H

/*** end of file ***/
