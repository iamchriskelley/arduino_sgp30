/*
 * Arduino SGP30 library API wrapper
 */

#include "arduino_SGP30.h"

#ifdef __cplusplus
extern "C"
{
#endif
	
SGP30 *mgos_SGP30_create(int I2C_ADDRESS);

void mgos_SGP30_close(SGP30 *rtc);

void mgos_SGP30_setTime(SGP30 *rtc, int seconds, int minutes, int hours24, int dayOfTheWeekDay, int date, bool Century, int month, int twoDigitYear);

void mgos_SGP30_setTimeSeconds(SGP30 *rtc, int seconds);

void mgos_SGP30_setTimeMinutes(SGP30 *rtc, int minutes);

void mgos_SGP30_setTimeHours(SGP30 *rtc, int hours);

void mgos_SGP30_setTimeDayOfTheWeek(SGP30 *rtc, int dayOfTheWeek);

void mgos_SGP30_setTimeDate(SGP30 *rtc, int date);

void mgos_SGP30_setTimeMonth(SGP30 *rtc, int month);

void mgos_SGP30_setTimeYear(SGP30 *rtc, int twoDigitYear);

int mgos_SGP30_getTimeSeconds(SGP30 *rtc);

int mgos_SGP30_getTimeMinutes(SGP30 *rtc);

int mgos_SGP30_getTimeHours(SGP30 *rtc);

bool mgos_SGP30_getTimeHoursIs12HourClock(SGP30 *rtc);

bool mgos_SGP30_getTimeHoursIsPM(SGP30 *rtc);

int mgos_SGP30_getTimeDayOfTheWeek(SGP30 *rtc);

int mgos_SGP30_getTimeDate(SGP30 *rtc);

int mgos_SGP30_getTimeMonth(SGP30 *rtc);

int mgos_SGP30_getTimeYear(SGP30 *rtc);

bool mgos_SGP30_getTimeYearCentury(SGP30 *rtc);	   

#ifdef __cplusplus
}
#endif /* __cplusplus */