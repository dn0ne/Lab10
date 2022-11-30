#include <iostream>
#include <Windows.h>
using namespace std;

// Задача 1.1 Обчислення за відомими формулами

double pi = acos(-1); // Обчислення числа Пі для використання у формулах

int main()
{
	// Встановлення кодування виводу в консоль (для коректного відображення літери і)
	SetConsoleOutputCP(1251);

	double radius, perimeter, area;

	// Отримуємо радіус клумби від користувача
	cout << "Введіть радіус клумби: ";
	cin >> radius;

	// Обчислюємо периметр та радіус клумби
	perimeter = 2 * pi * radius;
	area = pi * radius * radius;

	// Виводимо отримані значення в консоль
	cout << "Периметр: " << perimeter << endl;
	cout << "Площа: " << area;
}