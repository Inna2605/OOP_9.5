//��������� ������������� ������������, ����������� ����� �����������, ��������� � �������.
#pragma once
#include "square.h"
#include "circle.h"
class circle_in_square : public square, public circle
{
public:
	void Input();
	void Output();
};

