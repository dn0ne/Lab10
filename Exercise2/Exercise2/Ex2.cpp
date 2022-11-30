#include <iostream>
#include <Windows.h>
using namespace std;

// Задача 2. Трикутник (Варіант 1)

int main() {
	SetConsoleOutputCP(1251);

	// Задаємо точки з координатами
	// Значення dotA[0] - це абсциса, а dotY[1] - це ордината
	int dotA[2] = { 0, 0 };
	int dotB[2] = { 1, 0 };
	int dotC[2] = { -1, 2 };

	// Знаходимо довжини сторін трикутника за формулою
	// а - це сторона AB, b - BC, c - AC
	double a = sqrt(pow(dotB[0] - dotA[0], 2) + pow(dotB[1] - dotA[1], 2));
	double b = sqrt(pow(dotC[0] - dotB[0], 2) + pow(dotC[1] - dotB[1], 2));
	double c = sqrt(pow(dotC[0] - dotA[0], 2) + pow(dotC[1] - dotA[1], 2));

	// Знаходимо півпериметр для формул
	double p = (a + b + c) / 2;

	// Знаходимо висоту, проведену до сторони а
	double hA = 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / a;

	// Знаходимо бісектрису, проведену до сторони с
	double wC = 2 * sqrt(a * b * p * (p - c)) / (a + b);

	// Виводимо результат у консоль
	cout << "Для заданого трикутника:\n"
		<< "hA = "
		<< hA
		<< endl
		<< "wC = "
		<< wC;
}