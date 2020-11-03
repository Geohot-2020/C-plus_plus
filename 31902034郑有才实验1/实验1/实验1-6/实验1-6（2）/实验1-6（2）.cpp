#pragma warning(disable:4996) //解决高级版本strcpy的安全性问题
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
		cout << "学生姓名为：" << name << "，年龄是：" << age << "，家庭住址是" << home << endl;
	}
};

int main()
{
	char name[20];
	int age;
	char home[50];
	cout << "请依次输入姓名，年龄，家庭住址" << endl;
	cin >> name >> age >> home;
	student AA(name, age, home);
	AA.show();
}