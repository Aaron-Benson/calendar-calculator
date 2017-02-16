/*
Aaron Benson
Month header file.
Holds the month number value, the amount of days in the month, the starting weekday value of the first
of the month, and the dates contained in the month and their weekday values.

private members:
monthNumber - the month this object is describing. Example) Febuary = 2.
daysInMonth - the amount of days in this month.
startingDay - the weekday value of the first of this month.
dateArr - an array containing the dates in the month.

public members:
Month() - constructor that initializes all private variables.
~Month() - destructor that takes care of freeing memory.
printMonth() - prints the month to the console.
*/
#include "Date.h"

class Month {
private:
	int monthNumber;
	int daysInMonth;
	char startingDay;
	Date *dateArr;
public:
    Month(int m, int y, char NYD);
	~Month();
	void printMonth();
};