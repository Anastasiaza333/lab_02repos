// Lab_02.cpp
// < ����� �������� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������

	cout << "x = " ; cin >> x;cout << endl;
	cout << "y = " ; cin >> y;cout << endl;

	z1 =cos(x)*cos(x)*cos(x)*cos(x)+sin(y)*sin(y)+1.0/4*sin(2*x-1)*sin(2*x-1);
	z2 =sin(y+x)*sin(y-x);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}