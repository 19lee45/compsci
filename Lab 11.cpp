//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
using namespace std
void input(int &n1, int &d1, int &n2, int &d2);
void menufunc(char &menu);
void multiply(int n1, int d1, int n2, int d2, int &prn, int &prd);
void divide(int n1, int d1, int n2, int d2, int &prn, int &prd);
void find_gcf(int &d1, int &d2);
void output(int n1, int d1, int n2, int d2, int prn, int prd);
int main() {
	char option;
	do {
		int numone, denone, numtwo, dentwo, num, den;
		char menu;
		input(numone, denone, numtwo, dentwo);
		menufunc(menu);
		if (menu == '1'){
			multiply (numone, denone, numtwo, dentwo, num, den);
		}
		if (menu == '2'){
			divide (numone, denone, numtwo, dentwo, num, den);
		}
		output(numone, denone, numtwo, dentwo, num, den);
		cout << "Another problem (y for yes, n for no)? ";
		cin >> option;
		if (option == 'n'){
			break;
		}
	}while (option == 'y');
	return 0;
}

void input(int &n1, int &d1, int &n2, int &d2){
	do{
		cout << "Enter the numerator and denominator of the first fraction: ";
		cin >> n1 >> d1;
		cout << "\nEnter the numerator and denominator of the second fraction:";
		cin >> n2 >> d2;
		if(n1 < 0|| d1 < 0 || n2 < 0 || d2 < 0){
			cout << "Please enter a valid number" << endl;
		}
	}while (n1 < 0|| d1 < 0 || n2 < 0 || d2 < 0);
}

void menufunc(char &menu){
	do{
		cout << "Menu of Operations\nMultiply..............1\nDivide................2 " << endl;
		cout << "Which Operation? ";
		cin >> menu;
		if (menu!='1' || menu!='2'){
			cout << "that is not an option, please choose a valid option." << endl;
		}
	}while (menu !='1' && menu!='2');
}

void find_gcf(int &d1, int &d2){
	if (d1 ==0 || d2 ==0){
	}
}

void multiply(int n1, int d1, int n2, int d2, int &prn, int &prd){
prn = n1*n2;
prd = d1*d2;
}

void divide(int n1, int d1, int n2, int d2, int &prn, int &prd){
prn = n1*d2;
prd = d1*n2;
}

void output(int n1, int d1, int n2, int d2, int prn, int prd){
	cout << " " << n1 << "   " << n2 << "   " << prn;
}

