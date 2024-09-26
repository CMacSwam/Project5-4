#include <iostream>

using namespace std;

int main(void) {
	int value; 
	int digit;
	int sum = 0;
	int doublingdigits = 0;
	int digittemp = 0;
	int temp = 0;
	int valuetemp = 0;
	int temp3 = 0;
	int temp4 = 0;
	int temp5 = 0;

	cout << "Enter a non-zero, positive value ";
	cin >> value;
	temp3 = value;
	temp4 = temp3 % 10;
	sum += temp4;
	value /= 10;
	digit = value % 10;
	sum += digit;

	while (value > 0) {
		value /= 100;
		digit = value % 10;
		digittemp = digit;
		temp = digittemp * 2;
		doublingdigits += temp % 10;
		temp / 10;
		doublingdigits += temp;

		temp3 /= 100;
		temp4 = temp3 % 10;
		sum += temp4;
	}
	sum -= 9;
	doublingdigits = (doublingdigits / 2) + 1;
	if ((sum + doublingdigits) == 50) {
		cout << "Card is valid.";
	}
	else { cout << "Card is not valid."; }

}