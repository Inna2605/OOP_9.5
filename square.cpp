//��������� ������������� ������������, ����������� ����� �����������, ��������� � �������.
# include <iostream>
#include "square.h"
using namespace std;

square::square(int i)
{
	side = i;
}

void square::Input()
{
	cout << "������� ������� ��������: ";
	cin >> side;
}

float square::Square()
{
	float Squa = side * side;
	return Squa;
}

void square::Output()
{
	cout << "������� �������� �� �������� " << side << " �����: " << Square();
}
