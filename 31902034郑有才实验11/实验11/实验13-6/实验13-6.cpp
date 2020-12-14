// 实验13-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Circle{};		// 虚基类1

class Cylinder:virtual public Circle{};		// 继承1
class Sphere:virtual public Circle{};		// 继承2

class Rectangle{};	// 基类2

class Object:public Cylinder,public Sphere,public Rectangle{};		// 物体类


int main()
{
    return 0;
}

