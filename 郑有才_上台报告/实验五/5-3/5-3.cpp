#include <iostream>
using namespace std;

class Date {
private:
	int year=2014;
	int month=12;
	int day=10;
public:
	//重载方法
	Date(void) {}

	Date(int y)//年
	{
		year = y;
	}

	Date(int y, int m)//年，月
	{
		year = y;
		month = m;
	}

	Date(int y, int m, int d)//年，月，日
	{
		year = y;
		month = m;
		day = d;
	}
	
	void show()
	{
		cout << year << "年" << month << "月" << day << "日" << endl;
	}

};

int main()
{
	Date date1;//定义无参函数不要加括号
	Date date2(2013);
	Date date3(2012, 8);
	Date date4(2013, 10, 8);
	date1.show();
	date2.show();
	date3.show();
	date4.show();

}