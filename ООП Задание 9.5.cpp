﻿//Используя множественное наследование, разработать класс “Окружность, вписанная в квадрат”.
#include <iostream>
#include "square.h"
#include "circle.h"
#include "circle_in_square.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    
    square Sq;
    Sq.Input();
    Sq.Output();
    cout << endl << endl << endl;

    circle Cr;
    Cr.Input();
    Cr.Output();
    cout << endl << endl << endl;

    circle_in_square Cr_Sq;
    Cr_Sq.Input();
    Cr_Sq.Output();
    cout << endl;
}