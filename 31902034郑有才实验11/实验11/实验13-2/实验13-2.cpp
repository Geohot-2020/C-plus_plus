// 实验13-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string.h>
using namespace std;

class Time
{
public:
	Time(int h, int m, int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	virtual void display()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
protected:
	int hours, minutes, seconds;
};

class Date
{
public:
	Date(int m, int d, int y)
	{
		month = m;
		day = d;
		year = y;
	}
	virtual void display()
	{
		cout << month << "/" << day << "/" << year;
	}
protected:
	int month, day, year;
};

class Birthtime :public Time, public Date
{
public:
	Birthtime(char *Cn, int mm, int dd, int yy,int hh, int mint, int ss)
		:Time(hh,mint,ss),Date(mm,dd,yy)
	{
		strcpy_s(Childname,strlen(Cn)+1, Cn);
	}
	void display()
	{
		cout << Childname << ' ';
		Date::display();
		cout << endl;
		Time::display();
	}
protected:
	char Childname[20];
};

int main()
{
	Birthtime yx("Yuanxiang", 10, 27, 1996, 13, 20, 0);
	yx.display();
    return 0;
}

