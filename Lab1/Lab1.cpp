//Task: User enters triangle tops coordinates. Calculate triangle sides length
//and triangle area
//Задание: Пользователь вводит координаты вершин треугольника. Посчитайте длины сторон
//и площадь треугольника

#include "pch.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#pragma warning (disable: 4996)

int main()
{
	double x1, y1, x2, y2, x3, y3, a, b, c, S, R;
	printf("Enter x1 and y1 : ");
	scanf("%lf%lf", &x1, &y1);
	printf("Enter x2 and y2 : ");
	scanf("%lf%lf", &x2, &y2);
	printf("Enter x3 and y3 : ");
	scanf("%lf%lf", &x3, &y3);
	a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	c = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	printf("a =%.3lf b=%.3lf c=%.3lf ", a, b, c);
	S = abs(((x1 - x3)*(y2 - y3) - (y1 - y3)*(x2 - x3)) / 2);
	printf("\nTriangle area S = %.3lf", S);
	_getch();
	return 0;
}