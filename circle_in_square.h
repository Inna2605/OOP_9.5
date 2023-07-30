//»спользу€ множественное наследование, разработать класс Уќкружность, вписанна€ в квадратФ.
#pragma once
#include "square.h"
#include "circle.h"
class circle_in_square : public square, public circle
{
public:
	circle_in_square(int i);
	void Input();
	void Output();
};

