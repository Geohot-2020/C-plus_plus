#include"3-2.h"
int main()
{
	int m, n;
	//n�±꣬m�ϱ�
	cout << "������n,m(n<m):" << endl;
	cin >> n >> m;
	Addn_m A(m, n);
	cout<<A.add(m, n);
}