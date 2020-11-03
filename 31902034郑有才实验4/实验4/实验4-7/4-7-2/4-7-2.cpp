#include<iostream>
using namespace std;

class math
{
private:
	double x, y;
	char ch;
public:
	math(double a, double b, char c)
	{
		x = a;
		y = b;
		ch = c;
	}

	void calculate()
	{
		switch (ch)
		{
		case '+':cout << x << " " << ch << " " << y << "= " << x + y << endl; break;
		case '-':cout << x << " " << ch << " " << y << "= " << x - y << endl; break;
		case '*':cout << x << " " << ch << " " << y << "= " << x * y << endl; break;
		case '/':
			if (y == 0)
				cout << "��ĸΪ0���޷�����" << endl;
			else
				cout << x << " " << ch << " " << y << "= " << x - y << endl;
			break;
		}
	}
};


int main()
{
	math x(23, 0, '/');
	x.calculate();
}

