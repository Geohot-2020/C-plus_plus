/*
	拷贝构造函数的应用
*/
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
	char *buffer;
	int age;
public:
	Person(const Person &me);
	Person(char *p, int a);
	void Display();
};

//拷贝
Person::Person(const Person &me)
{
	buffer = new char[strlen(me.buffer) + 1];
	strcpy_s(buffer, strlen(me.buffer) + 1, me.buffer);
	this->buffer = "Liujiahai";
	this->age = me.age;
}

//重载
Person::Person(char *p, int a)
{
	buffer = new char[strlen(p) + 1];
	strcpy_s(buffer,strlen(p)+1, p);
	age = a;
}


//展示
void Person::Display()
{
	cout << "This name is " << buffer << " age is " << age << endl;
}

int main()
{
	Person A("Liu",50);
	Person B(A);
	B.Display();
	return 0;
}