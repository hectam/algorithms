#include <iostream>
#include <conio.h>
using namespace std;

double scalar_Product(double vector1[], double vector2[], int size)
{
	double result = 0;

	int i;

	for (i = 0; i < size; i++) {
		result += vector1[i] * vector2[i];
	}

	return result;
}

int main() {
	int size=0;
	cout << "How big will be your 2 vectors?\n ";
	cin >> size;
	double * save = new double[size];
	double * save1 = new double[size];

	for (int x = 0; x < size; x++) {
		save[x]= rand() % 100 + 1;
		save1[x] = rand() % 100 + 1;
		cout << save[x]<< " ||| ";
		
		cout << save1[x]<< "\n";
	}

	cout << "\n the scalar Product is: "<< scalar_Product(save, save1, size);

	_getch();

}