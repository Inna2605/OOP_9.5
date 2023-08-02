//»спользу€ множественное наследование, разработать класс Уќкружность, вписанна€ в квадратФ.
# include <iostream>
#include "square.h"
using namespace std;

square::square(int i)
{
	side = i;
}

void square::Input()
{
	cout << "¬ведите сторону квадрата: ";
	cin >> side;
}

float square::Square()
{
	float Squa = side * side;
	return Squa;
}

void square::Output()
{
	cout << "ѕлощадь квадрата со стороною " << side << " равна: " << Square();
}
