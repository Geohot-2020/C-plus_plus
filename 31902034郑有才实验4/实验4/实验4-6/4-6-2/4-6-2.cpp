#include<iostream>
using namespace std;

class rectangle
{
private:
	int a, b, c;
public:
	rectangle(int x, int y, int z) { a = x; b = y; c = z; }
	void judge()
	{
		if (a + b > c&&a + c > b&&b + c > a)
		{
			cout << "�ܹ���������" << endl;
			if (a == b&&b == c)
				cout << "�ܹ���һ���ȱ�������" << endl;
			else if (a == b || b == c || a == c)
				cout << "�ܹ���һ������������" << endl;
			else if (a*a + c*c == b*b || a*a + b*b == c*c || c*c + b*b == a*a)
				cout << "������һ��ֱ��������" << endl;
			else
				cout << "�ܹ���һ��һ���������" << endl;
		}
		else
			cout << "���ܹ���������" << endl;
	}
};

int main()
{
	int a, b, c;
	cout << "�����������ε������ߣ�" << endl;
	cin >> a >> b >> c;
	rectangle rec(a,b,c);
	rec.judge();

}