#include"3-2.h"
int main()
{
	int m, n;
	//n下标，m上标
	cout << "请输入n,m(n<m):" << endl;
	cin >> n >> m;
	Addn_m A(m, n);
	cout<<A.add(m, n);
}