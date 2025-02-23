// ********************************************************
// Programmer�s name: Luis Jimenez 
// Course Number:  CIS142
// Date:  September 27 2022
// Assignment:  Lab 2
// Description:  File IO
// Files: numbers.txt
// ********************************************************

# include <iostream>
# include <ostream>
# include <fstream>
# include <iomanip>
# include <string>

using namespace std;

int main()
{   //Declare variables 
	string _numbers;

	int _1, _2, _3, _4, _5, _6;

	int total = 0;
	//Used double so that it can include decimals
	double dbavge = 0.00;
	//ifstream to read file numbers.txt
	ifstream FileIO;

	FileIO.open("numbers.txt");

	FileIO >> _1 >> _2 >> _3 >> _4 >> _5 >> _6;
	//Adds numbers from numbers.txt file
	total = _1 + _2 + _3 + _4 + _5 + _6;
	//Divdes the total with the total amount of variables and is stored in dbavge
	dbavge = total / 6.00;
	//FileIO closed
	FileIO.close();
	//ofstream used to make new results.txt
	ofstream FileOutcome;
	//Gave it a name and opened file results.txt
	FileOutcome.open("results.txt");
	//setw(5) used for width like you asked, projects the 6 numbers separated
	FileOutcome << "The six numbers : " << setw(5) << _1 << setw(5) << _2 << setw(5) << _3 << setw(5)
		<< _4 << setw(5) << _5 << setw(5) << _6 << endl;
	//The total is displayed 
	FileOutcome << "Sum of six numbers : " << setw(5) << total << endl << endl;
	//Gives out the average and used setprecision(2) to display the two decimal places
	FileOutcome << "The average of six numbers : " << fixed << setw(5) << setprecision(2) << dbavge;
	//FileOutcome closed
	FileOutcome.close();
	return 0;
}