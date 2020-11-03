#include <iostream>
using namespace std;

class rectangle
{
private:
	int x, y;
public:
	rectangle(int a, int b);//��Ա��������*1
	int area();//��Ա��������*2
	void show();//��Ա��������*3
};

rectangle::rectangle(int a, int b)//���ⶨ��rectangle����
{
	x = a;
	y = b;
}

int rectangle::area()//���ⶨ��area����
{
	return x * y;
}

void rectangle::show()//���ⶨ��show����
{
	cout << "�����" << area() << endl;
}
int main()
{
	int a, b;
	cin >> a >> b;
	rectangle x(a, b);
	x.show();
}
