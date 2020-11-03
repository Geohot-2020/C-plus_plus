#include "2-2.h"
int main()
{
	int a, b;
	cin >> a >> b;
	//¼Ó
	int c1 = f1(a, b);
	cout << a << '+' << b << '=' << c1 << endl;
	//¼õ
	int c2 = f2(a, b);
	cout << a << '-' << b << '=' << c2 << endl;
	//³Ë
	int c3 = f3(a, b);
	cout << a << '*' << b << '=' << c3 << endl;
	//³ı
	int c4 = f4(a, b);
	cout << a << '/' << b << '=' << c4 << endl;
}