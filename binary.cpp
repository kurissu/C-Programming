#include<iostream>
#include<string>
using namespace std;

int main() {
	int number = 3562;
	int i=0;
	string binary[100];
	while (number > 0) {
	/*
		if ((number % 16) == 0)
			binary[i]=number%16;
		else {
			binary[i]=number%16;
		}
	*/
		switch(number%16){
			case 1: binary[i] ='1';
				break;
			case 2: binary[i] ='2';
				break;
			case 3: binary[i] ='3';
				break;
			case 4: binary[i] ='4';
				break;
			case 5: binary[i] ='5';
				break;
			case 6: binary[i] ='6';
				break;
			case 7: binary[i] ='7';
				break;
			case 8: binary[i] ='8';
				break;
			case 9: binary[i] ='9';
				break;
			case 10: binary[i] ='A';
				break;
			case 11: binary[i] ='B';
				break;
			case 12: binary[i] ='C';
				break;
			case 13: binary[i] ='D';
				break;
			case 14: binary[i] ='E';
				break;
			case 15: binary[i] ='F';
				break;
			default: cout<<"out of scope"<<endl;
				break;
			}
		i++;
		number = number / 16;
	}
	while (i > 0) {
		i--;
		cout << binary[i];
	}
//	system("pause");
	return 0;
}
