#include <iostream>
using namespace std;
//十进制化八进制
class Date
{
private:
	int x;
	void show(int a)
	{
		if (a >= 8)
			show(a / 8);
		cout << a % 8;
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
	Date A(x);
	A.print();
	return 0;
}