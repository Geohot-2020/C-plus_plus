// ʵ��13-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Circle{};		// �����1

class Cylinder:virtual public Circle{};		// �̳�1
class Sphere:virtual public Circle{};		// �̳�2

class Rectangle{};	// ����2

class Object:public Cylinder,public Sphere,public Rectangle{};		// ������


int main()
{
    return 0;
}

