#include <iostream>
using namespace std;
//十进制化16进制
class Date
{
private:
	int x;
	//16进制转换
	char transform(int x)
	{
		char ts;
		if (x < 10)
			ts = char(x+48);//0(asc48) -> 0(char)
		else
			ts = char(x + 55);//10 -> A
		return ts;
	}
	void show(int a)
	{
		if (a >= 16)
			show(a / 16);
		cout << transform(a % 16);
	}
public:
	Date(int xx) { x = xx; }
	void print()
	{
		int a = x;
		show(a);
	}
};

int main()
{
	int x;
	cin >> x;
	//int y;
	//cin >> y;
	//cout << char(y);
	Date A(x);
	A.print();
	return 0;
}