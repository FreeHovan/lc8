#include<iostream>
#include "math.h"
#include "Header.h"

using namespace std;

Complex y(Complex& z)
{
	Complex res = z * tg(z) + 2;
	return res;
}

int main() 
{
	setlocale(LC_ALL, "RUS");
	Complex a, res; 
	cout << "������� �������������� � ������ ����� ������������ �����" << endl;
	cin >> a;
	res = y(a);
	cout << res;
}

