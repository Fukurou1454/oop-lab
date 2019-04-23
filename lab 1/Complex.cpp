#include "pch.h"
#include "Complex.h"
#include<iostream>
#include<string>
using namespace std;
void Complex::set()
{
	cin >> x1 >> y1;
	cin >> x2 >> y2;
}

void Complex::out()
{
	cout << x1 << "+i*" << y1 << endl;
	cout << x2 << "+i*" << y2 << endl;
}

void  Complex::plus()
{
	cout << x1 + x2 << "+i*" << y1 + y2 << endl;
}

void  Complex::minus()
{
	cout << x1 - x2 << "+i*" << y1 - y2 << endl;
}

void Complex::multiplication()
{
	cout << x1 * x2 - y1 * y2 << "+i*" << x1 * y2 + x2 * y1 << endl;
}
void Complex::division()
{
	cout << ((x1*x2+y1*y2)/(x1*x1+y1*y1)) << "+i*" <<((x1*y2-x2*y1)/ (x1*x1 + y1 * y1)) << endl;
}
