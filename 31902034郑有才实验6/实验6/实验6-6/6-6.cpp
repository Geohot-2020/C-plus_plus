#include <iostream>
#include <iomanip>
using namespace std;
const int N = 100;
class inv
{
private:
	int a[N];
	int x;
	int cnt;
public:
	inv(int m,int n,int y[])
	{
		for (int i = 0; i < n; i++)
			a[i] = y[i];
			x = m;
			cnt = n;
	}
	
	int sch();
};
int inv::sch()
{
	int count = 0;
	for (int i = 0; i < cnt; i++)
		if (x == a[i])
			count++;
	return count;

}
int main()
{
	
	int m;
	int n;
	int y[N];
	cout << "��������Ҫ���ҵ�����" << endl;
	cin >> m;
	cout << "�����������������ĸ�����" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> y[i];

	inv A(m,n,y);
	cout<<A.sch()<<endl;
	return 0;
}