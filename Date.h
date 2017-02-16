/*
Aaron Benson
Date header file.
Holds the day of the month value and the weekday value of a particular date.

private members:
dayNumber - the day of the month value.
dayWeek - the weekday value.

public members:
getDayNumber() - returns the day of the month of this date.
getDayOfWeek() - returns the weekday value of this date.
setDate() - sets dayNumber to n and dayWeek to w.
*/
class Date {
private:
	int dayNumber;
	char dayWeek;
public:
	int getDayNumber();
	char getDayOfWeek();
	void setDate(int n, char w);
};