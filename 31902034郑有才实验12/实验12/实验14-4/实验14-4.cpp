// ʵ��14-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<iostream>
#include<string.h>
using namespace std;

// ����
class Person
{
protected:
	char name[20];
public:
	// ��ֵ
	Person(char *n)
	{
		strcpy_s(name, strlen(n)+1, n);
	}
	// �麯��
	virtual void show();
};

void Person::show()
{
	cout << "������" << name<<endl;
}

// ѧ����
class Student:public Person
{
private:
	int e1, e2, e3;	// ���ųɼ�
	bool flag1 = false;	// �ж����ųɼ��Ƿ񳬹�75
public:
	Student(char *n, int a, int b, int c) :Person(n)
	{
		e1 = a;
		e2 = b;
		e3 = c;
		if (e1 >= 75 && e2 >= 75 && e3 >= 75)
		{
			flag1 = true;
		}
	}
	void show();
};

void Student::show()
{
	Person::show();
	if (flag1)
	{
		cout << "���ŵ���" << endl;
	}
	else
	{
		cout << "�����ŵ���" << endl;
	}
}

// ��ʦ��
class Teacher :public Person
{
private:
	int nums;
	bool flag2 = false;
public:
	Teacher(char *n, int num) :Person(n)
	{
		nums = num;
		if (num >= 3)
		{
			flag2 = true;
		}
	}
	void show();
};

void Teacher::show()
{
	Person::show();
	if (flag2)
	{
		cout << "�ϸ��ʦ"<<endl;
	}
	else
	{
		cout << "���Ǻϸ��ʦ"<<endl;
	}
}


int main()
{
	Person *p;
	Student s1("С��", 75, 75, 75);
	Teacher t1("С��", 100);
	p = &s1;
	p->show();
	p = &t1;
	p->show();
    return 0;
}

