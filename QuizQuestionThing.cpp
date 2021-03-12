#include <iostream>
using namespace std;

int main()
{
	//Declaring all variables
	int StCount, StCurrent;
	string StName, StNameHi, StNameLo, StID, StIDHi, StIDLo;
	float AsAvg, AsHi = -1, AsLo = 101, As1, As2, As3;

	//Intro & Determining Class Size
	cout << "*************************************";
	cout << "\n\tWelcome to SmartSort!\n";
	cout << "*************************************\n";
	cout << "\nThis program will show you who in your class is performing the best, and who is performing the worst.\n\n";
	cout << "\nFirst off, how many students are in your class? \t";
	cin >> StCount;

	//Loop for all students
	for (StCurrent = 0; StCurrent < StCount; StCurrent++) {
		
		//Taking Student Details Input
		cout << "\n\nWhat is this Student's name? \t";
		cin >> StName;
		cout << "What is this Student's ID? \t";
		cin >> StID;
		cout << "What was this Student's 1st Assessment Score? \t";
		cin >> As1;
		cout << "What was this Student's 2nd Assessment Score? \t";
		cin >> As2;
		cout << "What was this Student's 3rd Assessment Score? \t";
		cin >> As3;
		cout << "Student Details Stored. Next Student...\n";

		//Calculating Student's Average Grade
		AsAvg = (As1 + As2 + As3) / 3;

		//Calculating if Average Grade is the Highest or Lowest in the class
		if (AsAvg > AsHi) {
			AsHi = AsAvg;
			StNameHi = StName;
			StIDHi = StID;
		}

		if (AsAvg < AsLo) {
			AsLo = AsAvg;
			StNameLo = StName;
			StIDLo = StID;
		}
	}

	//Outputting Lowest and Highest Result
	cout << "\n\nYour Highest Achieving Student is " << StNameHi << " (ID: " << StIDHi << ") with an average grade score of " << AsHi << endl;
	cout << "\nYour Lowest Achieving Student is " << StNameLo << " (ID: " << StIDLo << ") with an average grade score of " << AsLo << endl;
	cout << "\n\nThank You for using SmartSort!\n\n";
} 

/*
PROBLEMS WITH THE CODE:
Can only store 1 student as Highest or Lowest average grade score. This means that if a Student has an identical grade average to the current lowest/highest grade score,
it will not register them at all.
Program just ends outputting blank values if a number lower than 1 is given for Student Count.
*/