#include <iostream>
#include <iomanip>
using namespace std;

class inv
{
private:
	int a[6][6];

public:
	inv(int x[6][6])//��ʼ��
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
			cout << "��������"<<endl;
		else
			cout << "����������"<<endl;
	}
};

int main()
{
	int x[6][6];
	//����
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> x[i][j];
	
	inv A(x);
	A.judge();
}
