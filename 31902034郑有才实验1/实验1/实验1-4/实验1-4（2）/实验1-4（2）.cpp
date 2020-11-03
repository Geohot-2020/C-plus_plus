#include <iostream>
using namespace std;

class rectangle
{
private:
	int x, y;
public:
	rectangle(int a, int b);//成员函数声明*1
	int area();//成员函数声明*2
	void show();//成员函数声明*3
};

rectangle::rectangle(int a, int b)//类外定义rectangle函数
{
	x = a;
	y = b;
}

int rectangle::area()//类外定义area函数
{
	return x * y;
}

void rectangle::show()//类外定义show函数
{
	cout << "面积：" << area() << endl;
}
int main()
{
	int a, b;
	cin >> a >> b;
	rectangle x(a, b);
	x.show();
}
