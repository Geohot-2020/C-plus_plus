#include <iostream>
using namespace std;

class Complex
{
private:
	double real;
	double image;

public:
	Complex(void) { real = 0; image = 0; }
	Complex(double rp, double ip) { real = rp; image = ip; }
	friend Complex operator+(const Complex &x, const Complex &y);
	friend Complex operator-(const Complex &x, const Complex &y);
	friend Complex operator*(const Complex &x, const Complex &y);
	friend Complex operator/(const Complex &x, const Complex &y);
	void Print(void);
};

// ¥Ú”°
void Complex::Print(void)
{
	cout << real << "+"<< image << 'i' << endl;
}

// +
Complex operator+(const Complex &x, const Complex &y)
{
	return Complex(x.real + y.real, x.image + y.image);
}

// -
Complex operator-(const Complex &x, const Complex &y)
{
	return Complex(x.real - y.real, x.image - y.image);
}

// *
Complex operator*(const Complex &x, const Complex &y)
{
	return Complex(x.real*y.real - y.image*x.image, y.real*x.image + x.real*y.image );
}

// /
Complex operator/(const Complex &x, const Complex &y)
{
	return Complex((x.real*y.real + y.image*x.image)/(y.real*y.real+y.image*y.image), (y.real*x.image - x.real*y.image)/(y.real*y.real+y.image*y.image));
}
int main()
{
	Complex a(11.1, 22.2), b(33.3, 44.4);
	const Complex d(0.1, 0.2);
	Complex c;
	c = a + b;
	c.Print();
	c = Complex(5,0) - a;
	c.Print();
	c = a / b + d;
	c.Print();
	c = Complex(5, 0) * a;
	c.Print();
	c = a * b;
	c.Print();
	return 0;
}