#include<iostream>
using namespace std;

int main()
{
	int(*arr)[6];
	int size;
	size = 6;
	arr = new int[size][6];
	int maxa=0, maxb = 0;
	//输入
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > arr[maxa][maxb])
			{
				maxa = i;
				maxb = j;
			}
		}

	cout << "最大数为" << arr[maxa][maxb] << endl;
	cout << "下标为" << maxa << "," << maxb << endl;
	
	delete[]arr;
	return 0;

}