//Find all polindromes between x and y
//Найдите все полиндромы между x и y
#include "pch.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#pragma warning (disable: 4996)

int main()
{
	int x(0), y(0), i(0);
	printf("Enter x,y: ");
	scanf("%d%d", &x, &y);

	for (i += x; i <= y;)
	{
		int a = i;
		int temp = a;
		int b = 0;

		while (temp != 0)
		{
			b = b * 10 + temp % 10;
			temp /= 10;
		}

		if (a == b)
		{
			printf("\n Polindrom: %d", a);
		}

		i += 1;
	}

	_getch();
	return 0;
}
