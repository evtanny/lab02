#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int D = 390; // ���������� �� ����� � �� b
	int Rr = 15; // 1 ������ �� ���������� ����, ������-����
	int Rf = 36; // 1 ������ �� ���������� ����, �����-������
	int x = 5; // ���� �� 1 ������
	int Drr = D/Rr; // Rolls-Royce ���������� �������� �� �������
	int Drf = D/Rf; // Ford Escort ���������� �������� �� �������
	int Cr = Drr*x; // Rolls-Royce ����� �� ������
	int Cf = Drf*x; // Ford Escort ����� �� ������
	int S = Cf-Cr; // ������� ����������� ������� �� ��� ������� Rolls-Royce Ford Escort
	printf("���������� ����� �������� � ����������: %d ����.\n", D);
	printf("Rolls-Royce ��������� %d ����/������, Ford Escort � %d ����/������.\n", Rr, Rf);
	printf("��������� 1 ������� �������: %d ����.\n\n", x);
	printf("������� �� Rolls-Royce ��������� � %d �����.\n", Drr*x);
	printf("������� �� Ford Escort ��������� � %d ������.\n", Drf * x);
	printf("�������� ��� ������ Ford Escort ���������� %d ������.\n", Cr - Cf);
	return 0;
}