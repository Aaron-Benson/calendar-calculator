/*
Aaron Benson
Month implementation file.

See Month.h to view descriptions of members.
*/
#include "Month.h"
#include <iostream> 

/* Constructor that initializes all private variables. */
Month::Month(int m, int y, char NYD) {
	monthNumber = m;
	
	// Determine if the year is a leap year.
	bool isLeap = (y % 4 == 0 && (y % 100 != 0 || (y % 100 == 0 && y % 400 == 0)));
	
	// Offset the new year day by 1 to compensate for leap year but only if the month is march or beyond.
	if (isLeap && m > 2) {
		switch(NYD) {
			case 'M':
				NYD = 'T';
				break;
			case 'T':
				NYD = 'W';
				break;
			case 'W':
				NYD = 'R';
				break;
			case 'R':
				NYD = 'F';
				break;
			case 'F':
				NYD = 'S';
				break;
			case 'S':
				NYD = 'U';
				break;
			case 'U':
				NYD = 'M';
				break;
		}
	}
	
	// Sets the daysInMonth and the starting weekday variables. It takes into account the leap year.
	switch (m) {
		case 1: // January
			daysInMonth = 31;
			startingDay = NYD;
			break;
		case 2: // February
			
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'R';
					break;
				case 'T':
					startingDay = 'F';
					break;
				case 'W':
					startingDay = 'S';
					break;
				case 'R':
					startingDay = 'U';
					break;
				case 'F':
					startingDay = 'M';
					break;
				case 'S':
					startingDay = 'T';
					break;
				case 'U':
					startingDay = 'W';
					break;
			}
			
			// Use isLeap to set the days in the month of February.
			if (isLeap) {
				daysInMonth = 29;
			} else {
				daysInMonth = 28;
			}
			break;
		case 3: // March
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'R';
					break;
				case 'T':
					startingDay = 'F';
					break;
				case 'W':
					startingDay = 'S';
					break;
				case 'R':
					startingDay = 'U';
					break;
				case 'F':
					startingDay = 'M';
					break;
				case 'S':
					startingDay = 'T';
					break;
				case 'U':
					startingDay = 'W';
					break;
			}
			daysInMonth = 31;
			break;
		case 4: // April
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'U';
					break;
				case 'T':
					startingDay = 'M';
					break;
				case 'W':
					startingDay = 'T';
					break;
				case 'R':
					startingDay = 'W';
					break;
				case 'F':
					startingDay = 'R';
					break;
				case 'S':
					startingDay = 'F';
					break;
				case 'U':
					startingDay = 'S';
					break;
			}
			daysInMonth = 30;
			break;
		case 5: // May
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'T';
					break;
				case 'T':
					startingDay = 'W';
					break;
				case 'W':
					startingDay = 'R';
					break;
				case 'R':
					startingDay = 'F';
					break;
				case 'F':
					startingDay = 'S';
					break;
				case 'S':
					startingDay = 'U';
					break;
				case 'U':
					startingDay = 'M';
					break;
			}
			daysInMonth = 31;
			break;
		case 6: // June
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'F';
					break;
				case 'T':
					startingDay = 'S';
					break;
				case 'W':
					startingDay = 'U';
					break;
				case 'R':
					startingDay = 'M';
					break;
				case 'F':
					startingDay = 'T';
					break;
				case 'S':
					startingDay = 'W';
					break;
				case 'U':
					startingDay = 'R';
					break;
			}
			daysInMonth = 30;
			break;
		case 7: // July
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'U';
					break;
				case 'T':
					startingDay = 'M';
					break;
				case 'W':
					startingDay = 'T';
					break;
				case 'R':
					startingDay = 'W';
					break;
				case 'F':
					startingDay = 'R';
					break;
				case 'S':
					startingDay = 'F';
					break;
				case 'U':
					startingDay = 'S';
					break;
			}
			daysInMonth = 31;
			break;
		case 8: // August
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'W';
					break;
				case 'T':
					startingDay = 'R';
					break;
				case 'W':
					startingDay = 'F';
					break;
				case 'R':
					startingDay = 'S';
					break;
				case 'F':
					startingDay = 'U';
					break;
				case 'S':
					startingDay = 'M';
					break;
				case 'U':
					startingDay = 'T';
					break;
			}
			daysInMonth = 31;
			break;
		case 9: // September
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'S';
					break;
				case 'T':
					startingDay = 'U';
					break;
				case 'W':
					startingDay = 'M';
					break;
				case 'R':
					startingDay = 'T';
					break;
				case 'F':
					startingDay = 'W';
					break;
				case 'S':
					startingDay = 'R';
					break;
				case 'U':
					startingDay = 'F';
					break;
			}
			daysInMonth = 30;
			break;
		case 10: // October
			
			// StartingDay is NYD in this case.
			daysInMonth = 31;
			startingDay = NYD;
			break;
		case 11: // November
			
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'R';
					break;
				case 'T':
					startingDay = 'F';
					break;
				case 'W':
					startingDay = 'S';
					break;
				case 'R':
					startingDay = 'U';
					break;
				case 'F':
					startingDay = 'M';
					break;
				case 'S':
					startingDay = 'T';
					break;
				case 'U':
					startingDay = 'W';
					break;
			}
			daysInMonth = 30;
			break;
		case 12: // December
		
			// Find startingDay using the NYD.
			switch(NYD) {
				case 'M':
					startingDay = 'S';
					break;
				case 'T':
					startingDay = 'U';
					break;
				case 'W':
					startingDay = 'M';
					break;
				case 'R':
					startingDay = 'T';
					break;
				case 'F':
					startingDay = 'W';
					break;
				case 'S':
					startingDay = 'R';
					break;
				case 'U':
					startingDay = 'F';
					break;
			}
			daysInMonth = 31;
			break;
	}
	
	// Finally, populate the date array.
	dateArr = new Date[daysInMonth];
	char currentDay = startingDay;
	for(int i = 0; i < daysInMonth; i++) {
	
		// Set the date at position i.
		dateArr[i].setDate((i + 1), currentDay);
		switch(currentDay) {
			case 'M':
				currentDay = 'T';
				break;
			case 'T':
				currentDay = 'W';
				break;
			case 'W':
				currentDay = 'R';
				break;
			case 'R':
				currentDay = 'F';
				break;
			case 'F':
				currentDay = 'S';
				break;
			case 'S':
				currentDay = 'U';
				break;
			case 'U':
				currentDay = 'M';
				break;
		}
	}
}

/* Prints the month to the console. */
void Month::printMonth() {
	char firstChar = dateArr->getDayOfWeek();
	char currentChar;
	int spaceOffset, currentDay;
	std::cout << "     Su Mo Tu We Th Fr Sa\n     ";
	
	// Determine offset of first day.
	switch(firstChar) {
		case 'M':
			spaceOffset = 3;
			break;
		case 'T':
			spaceOffset = 6;
			break;
		case 'W':
			spaceOffset = 9;
			break;
		case 'R':
			spaceOffset = 12;
			break;
		case 'F':
			spaceOffset = 15;
			break;
		case 'S':
			spaceOffset = 18;
			break;
		case 'U':
			spaceOffset = 0;
			break;
	}
	
	// This offsets day 1 on the calendar so the labels at the top match the days in dateArr.
	for(int j = 0; j < spaceOffset; j++) {
		std::cout << " ";
	}
	
	// Print the days in the calendar.
	for(int j = 0; j < daysInMonth; j++) {
		currentChar = (dateArr + j)->getDayOfWeek();
		currentDay = (dateArr + j)->getDayNumber();
		
		if (currentChar == 'S') {
			// If the weekday is saturday, a newline character is printed after the day is printed.
			if (currentDay < 10) {
				// An extra space is required in front because the currentDay is only one character long.
				std::cout << " " << currentDay << "\n     ";
			} else {
				std::cout << currentDay << "\n     ";
			}
		} else {
			// A newline character is not needed after printing.
			if (currentDay < 10) {
				// An extra space is required in front because the currentDay is only one character long.
				std::cout << " " << currentDay << " ";
			} else {
				std::cout << currentDay << " ";
			}
		}
	}
	
	std::cout << "\n\n";
}

/* Destructor that takes care of freeing memory. */
Month::~Month() {
	delete [] dateArr;
}
