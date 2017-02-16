/*
Aaron Benson
Date implementation file.

See Date.h to view descriptions of members.
*/

#include "Date.h"

/* Sets dayNumber to n and dayWeek to w. */
void Date::setDate(int n, char w) {
	dayNumber = n;
	dayWeek = w;
}

/* Returns the day of the month of this date. */
int Date::getDayNumber() {
	return dayNumber;
}

/* Returns the weekday value of this date. */
char Date::getDayOfWeek() {
	return dayWeek;
}