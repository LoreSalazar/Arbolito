#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int counter = 8, auxCont = 1, auxCont2 = 7;
	char arbol[10];

	cout << "          *" << endl;

	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 9; j++) { 

			cout << " "; 

			if (j == counter) {
				cout << "*";
				for (int m = 0; m <= auxCont; m++) {
					cout << "*";
				}
			}
		}
		cout << "\n";
		counter--;
		auxCont = auxCont + 2;
	}

	//cout << "\n";

	for (int v = 0; v <= 3; v++) {
		for (int w = 0; w <= 20; w++) {

			cout << " ";

			if (w == 7) {
				for (int l = 0; l <= 4; l++) {
					cout << "|";
				}
			}
		}
		cout << "\n";
	}

	return 0;
}

