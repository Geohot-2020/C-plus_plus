#include<iostream>
using namespace std;

class date
{
private:
	int year, month, day;
public:
	//��������
	date(int y, int m, int d);
	//date(int y=2012, int m=01, int d=01);//���Բ�ͨ��
	//չʾ
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
	cout << "������" << year << "��" << month << "��" << day << "��" << endl;
}

int main()
{
	//date A(2012, 5, 12), B(2013);
	date A(2012,10), B();	//����ͨ��
	A.print();
	B.print();
	return 0;
}