#include<iostream>
using namespace std;

int fn1(int x)
{
	return x;
}

int fn2(int x)
{
	return 2 * x - 5;
}

int fn3(int x)
{
	return 3 * x + 4;
}

int main()
{
	int (*fp)(int x);
	int x;
	int t;
	cout << "ÇëÊäÈëx£º";
	cin >> x;

	if (x < 0)
		t = 1;
	else if (x < 5)
		t = 2;
	else
		t = 3;

	switch (t)
	{
	case 1:fp = fn1; break;
	case 2:fp = fn2; break;
	case 3:fp = fn3; break;
	}
	cout << "result=" << (* fp)(x) << endl;
}