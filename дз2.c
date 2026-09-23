#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	// Сколько килограммов каждого продукта
	int sweets = 3;
	int cookies = 3;
	int apples = 15;
	// Стоимость за 1 кг каждого продукта
	float sweets_1 = 170.0;
	float cookies_1 = 120.0;
	float apples_1 = 100.0;
	// Нахождение стоимости продукта одного продукта
	float x = sweets * sweets_1;
	float y = cookies * cookies_1;
	float c = apples * apples_1;
	// Нахождение стоимости всей покупки
	float all = x + y + c;
	// Вывод  результатов
	printf("Рассчет стоимости покупки\n");
	printf("====================\n");
	printf("Условия:\n Конфеты:\t %d р.\n Печеньe:\t %d р. \n Яблоки: \t%d р.\n", sweets, cookies, apples);
	printf("Стоимость продукта за 1кг\n Конфеты: \t %.2f кг \n Печенье: \t %.2f кг \n Яблоки: \t %.2f кг\n", sweets_1, cookies_1, apples_1);
	printf("Стоимость каждого продукта за его вес\n Конфеты: \t %.2fр. \n Печенье: \t %.2fр. \n Яблоки:\t %.2fр. \n", x, y, c);
	printf("====================\n");
	printf("Стоимость всей покупки \n Общая сумма: \t %.2fр. ", all);
	return 0;
}