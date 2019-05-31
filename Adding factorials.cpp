#include <iostream>
#include <fstream>

using namespace std;

int factorial(int number) {
	if (number == 0) {
		return 1;
	}
	else {
		number = number * factorial(number - 1);
	}
	return number;
}

int addingFactorials(int number) {
	int result = 0;
	int helper;
	do
	{
		helper = number % 10;
		result = result + factorial(helper);
		number = number / 10;
	} while (number > 0);
	return result;
}

int main() {
	cout << "Note: Press escape to quit the app" << endl;

	int number, n;
	char exit;

	cout << "Press enter to begin!" << endl;
	exit = getchar();
	n = 1;

	while (exit != 27) {
		cout << "[" << n << "] Enter the number of which you want to count sum of factorial of digits: " << endl;
		cout << "Number: ";
		cin >> number;
		cout << "Result is: " << addingFactorials(number) << endl;
		cout << "---------------------------------------------------------------------------" << endl;
		n = n + 1;
	}
	return 0;
}