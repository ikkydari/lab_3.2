// Lab_03_2.cpp
// < ����������� ������ >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "Please, enter a = "; cin >> a;
	cout << "Please, enter b = "; cin >> b;
	cout << "Please, enter c = "; cin >> c;
	cout << "Please, enter x = "; cin >> x;
	// ����� 1: ������������ � ��������� ����
	if (x == 0 && b != 0)
		F = a * pow((x + c), 2) - b;
	if (x == 0 && b == 0)
		F = (x - a) / -c;
	if (!(x == 0 && b != 0) && !(x == 0 && b == 0))
		F = a + x / c;
	cout << endl;
	cout << "1)Short form F = " << F << endl;
	// ����� 2: ������������ � ����� ����
	if (x == 0 && b != 0)
		F = a * pow((x + c), 2) - b;
	else
		if (x == 0 && b == 0)
			(x - a) / -c;
		else
			F = a + x / c;
	cout << "2)Long form F = " << F << endl;
	cin.get();
	system("pause");
	return 0;
}