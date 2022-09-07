#include <iostream>
using namespace std;

const int MAX = 16;

int findIndex(char ar[], char char1, char char2, char char3);
void initArray(char ar[MAX]);

int main() {
	char char1, char2, char3, theArray[MAX];
	initArray(theArray);

	for (int i=0; i<MAX; i++)
		cout << theArray[i] << " ";
	cout << "\nEnter a combination of three characters => ";
	cin >> char1 >> char2 >> char3;
	findIndex(theArray, char1, char2, char3);

	return 0;
}

// Function to find the index of the first character in combo and print results
int findIndex(char ar[], char char1, char char2, char char3) {
	int index = -1;
	for (int i=0; i<MAX; i++) {
		if (ar[i] == char1 && ar[i+1] == char2 && ar[i+2] == char3) {
			index = i;
			cout << char1 << char2 << char3 << " found at location: " << index;
			break;
		} else {
			cout << char1 << char2 << char3 << " not found! ";
			break;
		}
	}
	return index;
}

// Function to set the elements of the array
void initArray(char ar[MAX]) {
	ar[0] = 'a',
	ar[1] = 'b',
	ar[2] = 'c',
	ar[3] = 'a',
	ar[4] = 'a',
	ar[5] = 'b',
	ar[6] = 'b',
	ar[7] = 'a',
	ar[8] = 'a',
	ar[9] = 'a',
	ar[10] = 'a',
	ar[11] = 'b',
	ar[12] = 'a',
	ar[13] = 'a',
	ar[14] = 'c',
	ar[15] = 'a';
}
