//��������� ������������� ������������, ����������� ����� �����������, ��������� � �������.
#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>
#include "circle.h"
using namespace std;

circle::circle()
{
	diameter = 0;
}

void circle::Input()
{
	cout << "������� ������� �����: ";
	cin >> diameter;
}

float circle::Square()
{
	float Diam = M_PI * ((diameter / 2) * (diameter / 2));
	return Diam;
}

void circle::Output()
{
	cout << "������� ����� � ��������� " << diameter << " �����: " << Square();
}
