#include<iostream>
using namespace std;

class date
{
private:
	int year, month, day;
public:
	//函数重载
	date(int y, int m, int d);
	//date(int y=2012, int m=01, int d=01);//调试不通过
	//展示
	void print();
};

date::date(int y = 2012, int m = 01, int d = 01)
{
	year = y;
	month = m;
	day = d;
	cout << "date constuctor called" << endl;
}

void date::print()
{
	cout << "今天是" << year << "年" << month << "月" << day << "日" << endl;
}

int main()
{
	//date A(2012, 5, 12), B(2013);
	date A(2012,10), B();	//不可通过
	A.print();
	B.print();
	return 0;
}