// zavd_67.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Fraction.h"
int main()
{
    Fraction fr;
    double a = 0;
    double b = 0;
    while (true) {
        cout << "Enter number a: " << endl;
        cin >> a;

        cout << "Enter number b: " << endl;
        cin >> b;

        fr.setA(a);
        fr.setB(b);
        fr.fraction(a, b);

        int choose = 0;
        cout << "enter what you need add-1, min-2, mult-3, comparison-4" << endl;
        cin >> choose;
        if (choose == 1) {
            fr.add();
        }
        else if (choose == 2) {
            fr.sub();
        }
        else if (choose == 3) {
            fr.mult();
        }
        else if (choose == 4) {
            fr.compar();
        }
        else {
            cout << "wrong number" << endl;
        }

    }

}

