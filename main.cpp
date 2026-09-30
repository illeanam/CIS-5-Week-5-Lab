// Illeana Martinez - Week 5 Lab

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	
	// Declare variables
	int age = 0;
	double gpa = 0.0;

	// Prompts for user to input
	cout << "Age? ";
	cin >> age;
	cout << "GPA? ";
	cin >> gpa;

	// Output the results
	bool adult = (age >= 18);
	bool honors = (gpa >= 3.5);

	// Conditional scenarios  
	if (adult && honors) {
		// If the user is an adult and has honors
		cout << "Qualified for honors program." << endl;
	}
	else if (adult || honors) {
		// If the user only meets one of the requirements
		cout << "Only one requirement met." << endl;
	}
	else {
		// If the user meets neither requirement
		cout << "Requirements not met." << endl;
	}
}