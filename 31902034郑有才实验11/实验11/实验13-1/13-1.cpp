#include<iostream>
using namespace std;

class Parent
{
public:
	int pubD;
protected:
	int portD;
private:
	int privD;
};

class Son :public Parent
{
public:
	void fn()
	{
		int x;
		x = pubD;
		x = portD;
		// x = privD;	//不可访问
	}
};

class Daughter :private Parent
{
public:
	void fn()
	{
		int y;
		y = pubD;	// 降为私有
		y = portD;	// 降为私有
		// y = privD;	// 不可访问
	}
};

int main()
{
	// 基类
	Parent p;			
	p.pubD = 10;
	// p.portD = 10;	// 不可访问
	// p.privD = 10;	// 不可访问

	// 公有派生类
	Son s;
	s.pubD = 20;
	// s.portD = 20;	// 不可访问
	// s.priD = 20;		// 不可访问

	// 私有派生类
	Daughter d;
	// d.pubD = 30;		// 不可访问
	// d.portD = 30;	// 不可访问
	// d.priD = 30;		// 不可访问
	return 0;
}