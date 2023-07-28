#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include "circle_in_square.h"
using namespace std;

void circle_in_square::Input()
{
	cout << "Введите диаметр вписаного круга в квадрат: ";
	cin >> diameter;
	side = diameter;
}

void circle_in_square::Output()
{
	cout << "\nИмеем круг вписанный в квадрат.\nТак как диаметр круга " << diameter
		<< " равен стороне квадрата " << side;
	cout << "\n\nПлощадь круга (" << circle::Square()
		<< ") вписаного в квадрат меньше площади квадрата (" << square::Square() << ") в 4 деленное на пи раза";
	cout << "\n\nПроверка: если площадь круга " << circle::Square() << " умножить на (4 / пи), то получим площадь квадрата: "
		<< circle::Square() * (4 / M_PI) << " равно " << square::Square();
}
