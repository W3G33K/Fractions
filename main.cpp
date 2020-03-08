#include <iostream>

using namespace std;

int main() {
	int numerator = 0,
		denominator = 0;
	float result = 0.0f;

	/*
		TODO: Check for zero value;
	*/
	cout << "Type fraction numberator and press [Enter] key (must not be zero): ";
	cin >> numerator;
	cout << endl;

	/*
		TODO: Check for zero value;
	*/
	cout << "Type fraction denominator and press [Enter] key (must not be zero): ";
	cin >> denominator;
	cout << endl;

	// TODO: Simplify and show steps
	cout << "Converting fraction " << numerator << "/" << denominator << " to decimal ...";
	result = ((float) numerator / denominator);
	cout << endl;

	cout << "Result: " << result;
	cout << endl << endl;

	return 0;
}
