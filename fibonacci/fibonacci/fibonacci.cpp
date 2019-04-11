#include <iostream>
#include <conio.h>
using namespace std;

double Base[100];

double Fibonacci(int number) {
	if (Base[number] == 0) {
		if (number == 0 || number == 1)
			return(1);
		else
			Base[number] = (Fibonacci(number - 1) + Fibonacci(number - 2));
	}
	return Base[number];
}

int main() {

	int trial=0;

	cout << "enter a number:" << endl;
	cin >> trial;
	Fibonacci(trial);

	int basePrint = 0;

	for (int x = 0; x < 100; x++) {

		if (Base[x] != NULL) {
			
			(basePrint == 0) ? printf(" 1  %g ", Base[x]) : printf(" %g ", Base[x]);

			basePrint = 1;
		}

	}
	_getch();
}