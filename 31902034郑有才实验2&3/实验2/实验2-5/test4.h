#pragma once
#include <iostream>
using namespace std;
class shit {//��Ҫʹ�ÿα�data��Ϊ����
private:
	int x, y;

public:
	shit(int a, int b) { x = a; y = b; }//������ʼ��
	void gt()
	{
		cout << x << '>' << y << '=' << (x > y) << endl;
	}

	void print()
	{
		gt();
	}
};

