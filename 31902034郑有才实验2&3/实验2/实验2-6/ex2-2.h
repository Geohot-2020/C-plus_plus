#pragma once
#include <iostream>
using namespace std;
class triangle {
private:
	int x, y, z;
public:
	triangle(int a, int b, int c) { x = a; y = b; z = c; }//������ʼ��
	int circumference(int x, int y, int z);//�ܳ�
	double square(int x, int y, int z);//���
};

class diamond {
private:
	int x, y;
public:
	diamond(int a, int b ) { x = a; y = b;  }//������ʼ��
	double circumference(int x, int y);//�ܳ�
	double square(int x, int y);//���
};
