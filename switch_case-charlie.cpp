// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


void clearscreen(){

	/*	string of special characters that will translate to a clear screen command in the console. should work on any OS.	*/
	std::cout	<<	"\033[2J\033[1;1H";
	/**/

}


int main() {

	/**/
	int		start;
	int		userInput;
	string	month;
	/**/


	do	{

		/**/
		start	= 0;								// sets "start" variable to 0. relevant for restart function at end of program.
		clearscreen();
		cout	<< "Zahl (1-12): ";		cin >> userInput;
		/**/

		/**/
		switch(userInput){
			case 1:
				month = "Januar";
			break;
			case 2:
				month = "Februar";
			break;
			case 3:
				month = "Maerz";
			break;
			case 4:
				month = "April";
			break;
			case 5:
				month = "Mai";
			break;
			case 6:
				month = "Juni";
			break;
			case 7:
				month = "Juli";
			break;
			case 8:
				month = "August";
			break;
			case 9:
				month = "September";
			break;
			case 10:
				month = "Oktober";
			break;
			case 11:
				month = "November";
			break;
			case 12:
				month = "Dezember";
			break;
			default:
				month	= "0";								// sets "month" variable to "0". clears invalid input if possible. not all invalid inputs can be caught properly this way.
				start	= 1;								// sets "start" variable to 1. triggers while loop.
				cout	<< "invalide Eingabe";
				cin.ignore();
				cin.get();
			continue;
		}
		/**/

		/**/
		cout	<< "Der " << userInput << ". Monat ist der " << month << "."
				<< "\n\n"
				<< "restart? (0/1)";
		cin		>> start;
		/**/

	}	while	(	start != 0	);


	/**/
	clearscreen();
	cin.ignore();
	cin.get();
	return 0;
	/**/

}

/*
	compile:
g++ mehrseitige_Auswahl_charlie.cpp -o mA_charlie

	run from console:
./mA_charlie

	clear, compile, run:
clear && g++ mehrseitige_Auswahl_charlie.cpp -o mA_charlie && ./mA_charlie
*/
