#include <iostream>
#include <iomanip>
using namespace std;

class inv
{
private:
	int a[6][6];

public:
	inv(int x[6][6])//初始化
	{
		for (int i = 0; i < 6; i++)
			for (int j = 0; j < 6; j++)
				a[i][j] = x[i][j];
	}
	void judge()
	{
		int flag = 0;
		for(int i=1;i<=6;i++)
			for(int j=0;j<=5;j++)
				if (a[i][j] != 0)
				{
					flag = 1;
					break;
				}
		if (flag==0)
			cout << "是上三角"<<endl;
		else
			cout << "不是上三角"<<endl;
	}
};

int main()
{
	int x[6][6];
	//输入
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> x[i][j];
	
	inv A(x);
	A.judge();
}
