#include<iostream>
#include<cstring>

using namespace std;

int main(){

	// Declaring the String variables
	char string1[300], string2[300];

	// Declaring choice character
	char ch;

	//Loop to accept user inputs and concatenate them.
	do{
		cout << "\nEnter String 1:";
		cin >> string1;

		cout << "\nEnter String 2:";
		cin >> string2;

		cout << "\nConcatenated String is:" << strcat(string1,string2);

		cout << "\nDo you want to continue?(Y/N):";
		cin >> ch;
	}while (ch == 'y' || ch == 'Y');

	cout << "Program terminated.";
}
