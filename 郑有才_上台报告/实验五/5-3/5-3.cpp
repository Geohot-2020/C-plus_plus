#include <iostream>
using namespace std;

class Date {
private:
	int year=2014;
	int month=12;
	int day=10;
public:
	//���ط���
	Date(void) {}

	Date(int y)//��
	{
		year = y;
	}

	Date(int y, int m)//�꣬��
	{
		year = y;
		month = m;
	}

	Date(int y, int m, int d)//�꣬�£���
	{
		year = y;
		month = m;
		day = d;
	}
	
	void show()
	{
		cout << year << "��" << month << "��" << day << "��" << endl;
	}

};

int main()
{
	Date date1;//�����޲κ�����Ҫ������
	Date date2(2013);
	Date date3(2012, 8);
	Date date4(2013, 10, 8);
	date1.show();
	date2.show();
	date3.show();
	date4.show();

}