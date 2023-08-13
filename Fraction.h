#pragma once
class Fraction
{
private:
	double a;
	double b;
	int integerPart_a;
	double fractionalPart_a;
	int integerPart_b;
	double fractionalPart_b;

public:
	double getA();
	double getB();
	void setA(double c);
	void setB(double c);
	
	void fraction(double a, double b);
	void add();
	void sub();
	void mult();
	void compar();

};


  