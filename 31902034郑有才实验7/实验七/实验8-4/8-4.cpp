#include<iostream>
using namespace std;


void maxmin(int *p, int *max, int *min)
{
	int i;
	int imax = 0;
	int imin = 0;
	for ( i = 0; p[i]; i++)
	{
		if (p[i] > p[imax])
		{
			imax = i;
		}

		if (p[i] < p[imin])
		{
			imin = i;
		}

	}
	*max = imax;
	*min = imin;
}

int main()
{

	int a[10] = { 1,2,3,6,4,3,2,0 };
	int max, min;
	maxmin(a, &max, &min);
	for (int i = 0; i < 8; i++)
	{
		cout << a[i]<<endl;
	}
	cout <<"最大值：" <<a[max]<<endl<< "最小值：" << a[min];
	return 0;
}