#include "Fraction.h"
#include <iostream>
using namespace std;

void Fraction::fraction(double a, double b) {
	integerPart_a = static_cast<int>(a);
	fractionalPart_a = (a - integerPart_a) * 100;

	integerPart_b = static_cast<int>(b);
	fractionalPart_b = (a - integerPart_b) * 100;
	
	cout << "Integer: " << integerPart_a << endl;
	cout << "Fractional part: " << fractionalPart_a << endl;

	cout << "Integer: " << integerPart_b << endl;
	cout << "Fractional part: " << fractionalPart_b << endl;
}

void Fraction::add() {
	double resultAdd = (integerPart_a * fractionalPart_a) + (integerPart_b * fractionalPart_b);
	cout << resultAdd << endl;
}

void Fraction::sub() {
	double resultSub = (integerPart_a * fractionalPart_a) - (integerPart_b * fractionalPart_b);
	cout << resultSub << endl;
}

void Fraction::mult() {
	double resultMult = (integerPart_a * fractionalPart_a) * (integerPart_b * fractionalPart_b);
	cout << resultMult << endl;
}

void Fraction::compar() {
	if ((integerPart_a * fractionalPart_a) > (integerPart_b * fractionalPart_b)) {
		cout << "First number is greater" << endl;
	}
	else if ((integerPart_a * fractionalPart_a) < (integerPart_b * fractionalPart_b)) {
		cout << "Second number is greater" << endl;
	}
	else if ((integerPart_a * fractionalPart_a) == (integerPart_b * fractionalPart_b)) {
		cout << "Same" << endl;
	}
}

double Fraction::getA() {
	return a;
}

double Fraction::getB() {
	return b;
}
void Fraction::setA(double c) {
	a = c;
}
void Fraction::setB(double c) {
	b = c;
}
