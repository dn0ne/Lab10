#include <iostream>
#include <Windows.h>
using namespace std;

// ������ 3. �������� ������

const double pi = acos(-1);

int main() {
	SetConsoleOutputCP(1251);

	double a;

	// �������� �������� ���� �
	cout << "������ �������� ���� �: ";
	cin >> a;

	// ���������� �������� ������ 1 �� 2
	double z1 = 2 * pow(sin(3 * pi - 2 * a), 2) * pow(cos(5 * pi + 2 * a), 2);
	double z2 = 0.25 - 0.25 * sin(2.5 * pi - 8 * a);

	// �������� ���������� ��������� � �������
	cout << "�������� ������ 1: " << z1 << endl;
	cout << "�������� ������ 2: " << z2 << endl;

}