#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 10, k = 15;
	printf("������ %d ����� %d ����� 00 ������\n", n, k);
	printf("��� %d ������ �����\n", n * 60 + k);
	printf("�� �������� �������� %d ����� � %d �����\n", 15, 7);
	printf("C 8.00 ������ %d ������\n", k * 60);
	printf("������� ��� = %d/24 ����� � ������� ������ = %d/60 ����\n", n, k);
}