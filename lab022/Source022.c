#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 10, k = 15;
	printf("Сейчас %d часов %d минут 00 секунд\n", n, k);
	printf("Идёт %d минута суток\n", n * 60 + k);
	printf("До полуночи осталось %d часов и %d минут\n", 15, 7);
	printf("C 8.00 прошло %d секунд\n", k * 60);
	printf("Текущий час = %d/24 суток и текущая минута = %d/60 часа\n", n, k);
}