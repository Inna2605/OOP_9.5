//»спользу€ множественное наследование, разработать класс Уќкружность, вписанна€ в квадратФ.
#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>
#include "circle.h"
using namespace std;

circle::circle(int i)
{
	diameter = i;
}

void circle::Input()
{
	cout << "¬ведите диаметр круга: ";
	cin >> diameter;
}

float circle::Square()
{
	float Diam = M_PI * ((diameter / 2) * (diameter / 2));
	return Diam;
}

void circle::Output()
{
	cout << "ѕлощадь круга с диаметром " << diameter << " равна: " << Square();
}
