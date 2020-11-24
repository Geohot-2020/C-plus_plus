#include<iostream>
using namespace std;

class Date
{
private:
	int y, m, d;
public:
	Date(int yy,int mm,int dd)
	{
		y = yy;
		m = mm;
		d = dd;
	}
	void show()
	{
		cout << "���������գ�" << y << "-" << m << "-" << d << endl;
	}
};

//������
class Person
{
private:
	char Name[8];
	Date date;	//contain
	char Sex[4];

public:
	Person(char *n1, int y1, int m1, int d1, char *n2);
	void print();
};

Person::Person(char *n1, int y1, int m1, int d1, char *n2):date(y1,m1,d1)
{
	strcpy_s(Name, n1);
	strcpy_s(Sex, n2);
}

void Person::print()
{
	cout << Name << endl;
	cout << "�Ա�Ϊ��" << Sex<<endl;
	date.show();	//ͨ��Date��������Լ��ĳ�Ա����
}

int main()
{
	Person p1("zhengyc", 2020, 10, 24, "��");
	Date d(2021, 1, 1);
	p1.print();
	d.show();
	return 0;
}