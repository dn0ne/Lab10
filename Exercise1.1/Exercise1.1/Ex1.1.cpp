#include <iostream>
#include <Windows.h>
using namespace std;

// ������ 1.1 ���������� �� ������� ���������

double pi = acos(-1); // ���������� ����� ϳ ��� ������������ � ��������

int main()
{
	// ������������ ��������� ������ � ������� (��� ���������� ����������� ����� �)
	SetConsoleOutputCP(1251);

	double radius, perimeter, area;

	// �������� ����� ������ �� �����������
	cout << "������ ����� ������: ";
	cin >> radius;

	// ���������� �������� �� ����� ������
	perimeter = 2 * pi * radius;
	area = pi * radius * radius;

	// �������� ������� �������� � �������
	cout << "��������: " << perimeter << endl;
	cout << "�����: " << area;
}