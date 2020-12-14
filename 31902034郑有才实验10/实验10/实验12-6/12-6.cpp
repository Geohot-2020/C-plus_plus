//对着12-2改的
#include <iostream>
using namespace std;

class Complex
{
private:
	double real;
	double image;
	double res;
public:
	Complex(void) { real = 0; image = 0; }
	Complex(double rp, double ip) { real = rp; image = ip; }
	Complex(double result) { res = result; };
	friend Complex operator+(const Complex &x, const Complex &y);
	friend Complex operator-(const Complex &x, const Complex &y);
	void Print(void);
};

// 打印
void Complex::Print(void)
{
	cout << res << endl;
}

// +
Complex operator+(const Complex &x, const Complex &y)
{
	return Complex((x.real + x.image)*(x.real + x.image)+(y.real+y.image)*(y.real + y.image));
}

// -
Complex operator-(const Complex &x, const Complex &y)
{
	return Complex((x.real - x.image)*(x.real - x.image) - (y.real - y.image)*(y.real - y.image)-2*x.real*y.image-2*x.image*y.real);
}


int main()
{
	double a1, a2, b1, b2;
	cout << "请输入a1和a2" << endl;
	cin >> a1 >> a2;
	cout << "请输入b1和b2" << endl;
	cin >> b1 >> b2;
	Complex c;
	Complex a(a1, a2), b(b1, b2);
	c = a + b;
	c.Print();
	c = a - b;
	c.Print();
}