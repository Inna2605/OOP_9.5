#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include "circle_in_square.h"
using namespace std;

void circle_in_square::Input()
{
	cout << "������� ������� ��������� ����� � �������: ";
	cin >> diameter;
	side = diameter;
}

void circle_in_square::Output()
{
	cout << "\n����� ���� ��������� � �������.\n��� ��� ������� ����� " << diameter
		<< " ����� ������� �������� " << side;
	cout << "\n\n������� ����� (" << circle::Square()
		<< ") ��������� � ������� ������ ������� �������� (" << square::Square() << ") � 4 �������� �� �� ����";
	cout << "\n\n��������: ���� ������� ����� " << circle::Square() << " �������� �� (4 / ��), �� ������� ������� ��������: "
		<< circle::Square() * (4 / M_PI) << " ����� " << square::Square();
}
