#include <iostream>
using namespace std;
class cube
{
private:
	int a, b, c;

public:
	cube(int x, int y, int z) { a = x; b = y; c = z; }
	int Volume();//成员函数声明*1

	void show();//成员函数声明*2
};

int cube::Volume()//类外定义Volume函数
{
	int z;
	z = a * b * c;
	return z;
}

void cube::show()//类外定义show函数
{
	cout << "长方体体积：" << Volume() << endl;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cube s(a, b, c);
	s.show();
}