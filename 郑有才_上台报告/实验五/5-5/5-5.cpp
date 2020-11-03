#include <iostream>
using namespace std;

class inve
{
private:
	int a[10];
public:
	inve(int x[]){ 
		for (int i = 0; i < 10; i++)
			a[i] = x[i];
	};
	void inv();
	void inv(int n);
	void print();
};


void inve::inv()
{
	int b[10];//´æ·Åµ¹Ðò
	for (int i = 0; i <= 9; i++)
	{
		b[i] = a[9 - i];
		cout << b[i] << " ";
	}
	cout << endl;
	
}

void inve::inv(int n)
{
	int b[10];//µ¹Ðò
	for(int i = 0; i <= n; i++) {
		b[9 - i] = a[i];
	}
	for (int i = 10 - n; i < 10; i++)
		cout << b[i]<<" ";
	for (int i = n; i < 10; i++)
		cout << a[i] << " ";
}

void inve::print()
{
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int x[10];
	for (int i = 0; i < 10; i++)
		cin >> x[i];
	inve A(x);
	
	A.inv();

	int n;
	cin >> n;
	A.inv(n);
	return 0;
}