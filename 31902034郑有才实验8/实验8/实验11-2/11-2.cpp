#include<iostream>
using namespace std;
static int fmoney = 10000;	//父亲的钱拿来共用
class Person
{
private:
	char name[30];
	int money;
	
public:
	//设置父亲的钱
	Person(char *n, int m)
	{
		strcpy_s(name, n);
		money = m;			//取钱
		fmoney -= money;	//父亲少钱
	}
	~Person() {};
	static int Getfmoney(void)
	{
		return fmoney;	//返回static数据成员fmoney
	}
};

int main()
{
	Person p1("小红", 1000);
	Person p2("小蓝", 500);
	Person p3("小白", 2000);
	Person p4("小金", 1800);
	int f;
	f = Person::Getfmoney();
	cout << "父亲老王还有" << f << "元"<<endl;
	return 0;
}