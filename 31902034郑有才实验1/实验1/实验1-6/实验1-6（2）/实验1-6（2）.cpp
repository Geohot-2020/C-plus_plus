#pragma warning(disable:4996) //����߼��汾strcpy�İ�ȫ������
#include <iostream>
#include<string.h>
using namespace std;
class student
{
private:
	char name[20];
	int age;
	char home[50];
public:
	student(const char n[], int a, const char h[])
	{
		strcpy(name, n);
		age = a;
		strcpy(home, h);
	}
	void show()
	{
		cout << "ѧ������Ϊ��" << name << "�������ǣ�" << age << "����ͥסַ��" << home << endl;
	}
};

int main()
{
	char name[20];
	int age;
	char home[50];
	cout << "�������������������䣬��ͥסַ" << endl;
	cin >> name >> age >> home;
	student AA(name, age, home);
	AA.show();
}