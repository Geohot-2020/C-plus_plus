// ʵ��15-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

double f(double a, double b, double c)
{
	int x = 0;
	if (c == 0)
		throw x;
	else if (a + b / c < 0)
		throw a;
	else
		return sqrt(a + b / c);
}

void f1(double a, double b, double c)
{
	try
	{
		cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
		double s = f(a, b, c);
		cout << "���Ϊ��" << s << endl;
	}
	catch (int)
	{
		cout << "����������Ϊ0"<<endl;
		return;
	}
	catch (double)
	{
		cout << "���������Կ�����" << endl;
		return;
	}
}

int main()
{
	double a = 5, b = -100, c = 2;
	f1(a, b, c);
	a = 23, b = 35, c = 0;
	f1(a, b, c);
	a = 43, b = 75, c = 15;
	f1(a, b, c);

    return 0;
}

