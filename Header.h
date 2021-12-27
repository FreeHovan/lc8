#include "math.h"
#include<iostream>
using namespace std;
class Complex
{
public:
	Complex();
	Complex(double);
	Complex(double, double);
	double Phi() const;
	double R() const;
	double Re() const;
	double Im() const;
	Complex& operator+=(const Complex& right);
	Complex& operator-=(const Complex& right);
	Complex& operator*=(const Complex& right);
	Complex& operator/=(const Complex& right);
	Complex operator+ ( const Complex& right);
	Complex operator- ( const Complex& right);
	Complex operator* ( const Complex& right);
	Complex operator/ ( const Complex& right);
	Complex operator- ();
	explicit operator double()
	{
		return m_r * static_cast<double>(cos(m_phi));
	}
	friend ostream& operator<<(ostream& out, const Complex& c);
	friend istream& operator>>(istream& in, Complex& c);
private:
	double m_r = 0;      //модуль
	double m_phi = 0;	 //аргумент

};

Complex tg(const Complex& c);