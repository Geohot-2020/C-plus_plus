// ʵ��15-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class Type1,class Type2>

class myclass
{
private:
	Type1 i;
	Type2 j;
public:
	myclass(Type1 a, Type2 b)
	{
		i = a;
		j = b;
	}
	void show()
	{
		cout << i << ' ' << j << endl;
	}
};

int main()
{
	myclass<int, double> obj1(86, 175.2);
	myclass<char, char *> obj2('m', "Zhejiang university");
	obj1.show();
	obj2.show();
    return 0;
}

