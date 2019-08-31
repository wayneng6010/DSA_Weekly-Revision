#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// Initialisation of 2D array
	string timetable[5][10] = {
		{ "x", "x", "x", "x", "x", "x", "x", "x", "x", "x" } , // Monday
		{ "x", "x", "x", "x", "x", "x", "x", "210CT", "210CT", "210CT" } , // Tuesday
		{ "220CT", "220CT", "260CT", "260CT", "x", "x", "x", "x", "x", "x" } , // Wednesday
		{ "x", "x", "x", "x", "x", "x", "x", "x", "x", "x" } , // Thursday
		{ "220CT", "220CT", "x", "x", "210CT", "x", "x", "A202SGI", "A202SGI", "x" } // Friday
	};

	// Print out timetable
	for (int x = 0; x < 5; ++x) {
		for (int y = 0; y < 10; ++y) {
			cout << timetable[x][y] << "\t";
		}
		cout << endl;
	}

	cout << "\n-----------------------------------------\n\n";
	
	// a) List out all the subjects in Wednesday.
	string temp = "";
	cout << "Subjects in Wednesday: " << endl;
	for (int x = 0; x < 10; ++x) {
		if (timetable[2][x] != "x" && temp != timetable[2][x]) {
			cout << timetable[2][x] << endl;
			temp = timetable[2][x];
		}
	}
	cout << "\n-----------------------------------------\n\n";

	// b) Count how many hours of classes do you need to attend on Friday.
	cout << "Hours of classes on Friday: " << endl;
	int hours = 0;
	for (int x = 0; x < 10; ++x) {
		if (timetable[4][x] != "x") {
			hours += 1;
		}
	}
	cout << hours << " hours" << endl;
	cout << "\n-----------------------------------------\n\n";

	// c) Determine whether you have any class on Monday.
	cout << "Classes on Monday: " << endl;
	int classMon = 0;
	for (int x = 0; x < 10; ++x) {
		if (timetable[0][x] != "x") {
			classMon += 1;
		}
	}
	cout << classMon << " classes" << endl;
	cout << "\n-----------------------------------------\n\n";


	return 0;
}