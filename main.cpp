/*
Example Calendar Printer
Aaron Benson

Prints a particular month of a calendar to the console upon getting input from the user on what month it should be.
*/

#include "Month.h"
#include <iostream> 

int main() {
	// Initialize variables for month object.
	int year, month, choice;
	char NYD;
	
	std::cout << "Welcome to the calendar printer!\n";
	std::cout << "----------------------------------\n\n";
	while(1) {
		
		// Determine whether the user wants to generate a month or quit.
		std::cout << "Please enter 1 to generate a month calendar or 0 to quit.\n>";
		if (std::cin >> choice && choice == 0) {
			std::cout << "\n----------------------------------\n";
			break;
		} else if (choice != 1) {
			std::cout << "Input invalid.\n\n";
			std::cin.clear();
			std::cin.ignore();
			continue;
		} else {
			std::cout << "\n";
		}
			
		// Determine the year the user wants to use.
		while(1) {
			std::cout << "Please specify a year for the calendar.\n>";
			if(std::cin >> year && year < 10000 && year > 0) {
				std::cout << "\n";
				break;
			} 
			std::cin.clear();
			std::cin.ignore();
			std::cout << "That is not a correct year. Please type a year between 1 and 9999.\n\n";
		}
		
		// Determine the month the user wants to use.
		while(1) {
			std::cout << "Please specify a month integer for the calendar.\n>";
			if(std::cin >> month && month < 13 && month > 0) {
				std::cout << "\n";
				break;
			} 
			std::cin.clear();
			std::cin.ignore();
			std::cout << "That is not a correct month. Please type a month between 1 and 12.\n\n";
		}
		
		// Determine the NYD the user wants to use.
		while(1) {
			std::cout << "Please specify the new year weekday character for the selected year.\n";
			std::cout << "Correct characters: U - Sunday, M - Monday, T - Tuesday, W - Wednesday, R - Thursday, F - Friday, S - Saturday\n>";
			if(std::cin >> NYD && (NYD == 'u' || NYD == 'm' || NYD == 't' || NYD == 'w' || NYD == 'r' || NYD == 'f' || NYD == 's' || NYD == 'U' || NYD == 'M' || NYD == 'T' || NYD == 'W' || NYD == 'R' || NYD == 'F' || NYD == 'S')) {
				std::cout << "\n";
				break;
			} 
			std::cin.clear();
			std::cin.ignore();
			std::cout << "That is not a correct weekday character.\n\n";
		}
		
		// Create the month object using the input.
		Month *m = new Month(month,year,toupper(NYD));
		
		// Print the month.
		m->printMonth();
		
		// Delete the month object.
		delete m;
	}
}