// ʵ��14-7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// �¹ѳ�������
class Rectangle
{
protected:
	double a, b, c;
public:
	Rectangle(double x, double y, double z)
	{
		a = x;
		b = y;
		c = z;
	}
	double volume() { return a*b*c; }

};

// Բ��[����]
class Circle
{
protected:
	double radius;	// �������ݳ�Ա����������Բ������İ뾶
public:
	Circle(double ra) { radius = ra; }
	virtual double volume() = 0;
};

// ����
class Ball :public Circle
{
public:
	Ball(double ra) :Circle(ra) {};
	double volume() { return 3.14*radius*radius*radius * 4 / 3; }
};

// Բ����
class Cylinder :public Circle
{
private:
	double height;
public:
	Cylinder(double ra, double he) :Circle(ra)
	{
		height = he;
	}
	double volume() { return 3.14*radius*radius*height; }
};

// ����������
class Object :public Rectangle, public Ball, public Cylinder
{
private:
	double volume;
public:
	void showV()
	{
		
	}
};

int main()
{
	Circle *pA,*pB,*pC;
	Ball A(10);
	Cylinder B(10, 10);
	Rectangle C(10, 10, 10);
	pA = &A;
	pB = &B;
	
	cout << "��"<<pA->volume()<<endl;
	cout << "Բ����" << pB->volume() << endl;
	cout << "�����壺" << C.volume() << endl;

	cout << "�����������" << pA->volume() + pB->volume() + C.volume() << endl;
    return 0;
}

