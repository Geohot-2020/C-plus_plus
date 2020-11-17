#include<iostream>
using namespace std;

class Cat
{
private:
	char color[20];
	int weight;
	int age;
public:
	Cat(char *c, int w, int a)	//重载
	{
		strcpy_s(color, c);
		weight = w;
		age = a;
	}
	//显示数据
	void show()
	{
		cout << "颜色：" << color << ",体重：" << weight << "，年龄：" << age;
	}
};
	

int main()
{
	char color[20];
	int weight;
	int age;
	cout << "请逐个输入颜色，体重，年龄" << endl;
	//输入
	cin >> color;
	cin >> weight;
	cin >> age;
	//定义类
	Cat cat1 = Cat(color, weight, age);
	//展示数据
	cat1.show();
	return 0;
}