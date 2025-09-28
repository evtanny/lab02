#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int D = 390; // расстояние от точки а до b
	int Rr = 15; // 1 галлон на количество миль, “Роллс-Ройс”
	int Rf = 36; // 1 галлон на количество миль, “Форд-Эскорт”
	int x = 5; // цена за 1 галлон
	int Drr = D/Rr; // Rolls-Royce количество галлонов за поездку
	int Drf = D/Rf; // Ford Escort количество галлонов за поездку
	int Cr = Drr*x; // Rolls-Royce сумма за бензин
	int Cf = Drf*x; // Ford Escort сумма за бензин
	int S = Cf-Cr; // Разница потраченных средств на всю поездку Rolls-Royce Ford Escort
	printf("Расстояние между Лондоном и Эдинбургом: %d миль.\n", D);
	printf("Rolls-Royce расходует %d миль/галлон, Ford Escort — %d миль/галлон.\n", Rr, Rf);
	printf("Стоимость 1 галлона бензина: %d фунт.\n\n", x);
	printf("Поездка на Rolls-Royce обойдется в %d фунта.\n", Drr*x);
	printf("Поездка на Ford Escort обойдется в %d фунтов.\n", Drf * x);
	printf("Экономия при выборе Ford Escort составляет %d фунтов.\n", Cr - Cf);
	return 0;
}