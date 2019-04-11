#include <iostream>
#include <conio.h>

using namespace std;


int StrCmp(char * word1, char * word2) {
	int CountWord1 = 0;
	int CountWord2 = 0;
	while (word1[CountWord1] || word2[CountWord2]) {
		if(word1[CountWord1] != NULL){ CountWord1++; }
		if(word2[CountWord2] != NULL){ CountWord2++; }

	}
	if (CountWord1 > CountWord2) {
		return 1;
	}
	else if (CountWord1 < CountWord2){
		return -1;
	}
	else {
		return 2;
	}
	return 0;
}


int main() {
	do {
		cout << "\nEnter 2 words:" << endl;
		char * name1 = new char[30];
		char * name2 = new char[30];
		cin >> name1;
		cin >> name2;

		if (StrCmp(name1, name2) == 1) {
			cout << "the first word is bigger" << endl;
		}
		else if (StrCmp(name1, name2) == -1) {
			cout << "the second word is bigger" << endl;
		}
		else {
			cout << "the 2 words are equal" << endl;
		}

	} while (true);
	_getch();

   }
