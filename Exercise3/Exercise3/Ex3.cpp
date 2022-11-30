#include <iostream>
#include <Windows.h>
using namespace std;

// Задача 3. Значення виразу

const double pi = acos(-1);

int main() {
	SetConsoleOutputCP(1251);

	double a;

	// Отримуємо значення кута а
	cout << "Введіть значення кута а: ";
	cin >> a;

	// Обчислюємо значення виразу 1 та 2
	double z1 = 2 * pow(sin(3 * pi - 2 * a), 2) * pow(cos(5 * pi + 2 * a), 2);
	double z2 = 0.25 - 0.25 * sin(2.5 * pi - 8 * a);

	// Виводимо результати обчислень в консоль
	cout << "Значення виразу 1: " << z1 << endl;
	cout << "Значення виразу 2: " << z2 << endl;

}