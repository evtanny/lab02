#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 4;
	int L = 393;
	int k = 2;
	int m = 6;
	printf("Дано:\n%10d\n%10d\nОтвет: %+2.6f", 4, 393, (double)n / L);
	return 0;
}