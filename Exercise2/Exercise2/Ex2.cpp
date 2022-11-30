#include <iostream>
#include <Windows.h>
using namespace std;

// ������ 2. ��������� (������ 1)

int main() {
	SetConsoleOutputCP(1251);

	// ������ ����� � ������������
	// �������� dotA[0] - �� �������, � dotY[1] - �� ��������
	int dotA[2] = { 0, 0 };
	int dotB[2] = { 1, 0 };
	int dotC[2] = { -1, 2 };

	// ��������� ������� ����� ���������� �� ��������
	// � - �� ������� AB, b - BC, c - AC
	double a = sqrt(pow(dotB[0] - dotA[0], 2) + pow(dotB[1] - dotA[1], 2));
	double b = sqrt(pow(dotC[0] - dotB[0], 2) + pow(dotC[1] - dotB[1], 2));
	double c = sqrt(pow(dotC[0] - dotA[0], 2) + pow(dotC[1] - dotA[1], 2));

	// ��������� ���������� ��� ������
	double p = (a + b + c) / 2;

	// ��������� ������, ��������� �� ������� �
	double hA = 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / a;

	// ��������� ���������, ��������� �� ������� �
	double wC = 2 * sqrt(a * b * p * (p - c)) / (a + b);

	// �������� ��������� � �������
	cout << "��� �������� ����������:\n"
		<< "hA = "
		<< hA
		<< endl
		<< "wC = "
		<< wC;
}