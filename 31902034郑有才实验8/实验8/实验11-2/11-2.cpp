#include<iostream>
using namespace std;
static int fmoney = 10000;	//���׵�Ǯ��������
class Person
{
private:
	char name[30];
	int money;
	
public:
	//���ø��׵�Ǯ
	Person(char *n, int m)
	{
		strcpy_s(name, n);
		money = m;			//ȡǮ
		fmoney -= money;	//������Ǯ
	}
	~Person() {};
	static int Getfmoney(void)
	{
		return fmoney;	//����static���ݳ�Աfmoney
	}
};

int main()
{
	Person p1("С��", 1000);
	Person p2("С��", 500);
	Person p3("С��", 2000);
	Person p4("С��", 1800);
	int f;
	f = Person::Getfmoney();
	cout << "������������" << f << "Ԫ"<<endl;
	return 0;
}