#include<iostream>
using namespace std;

int main()
{
	int(*arr)[6];
	int size;
	size = 6;
	arr = new int[size][6];
	int maxa=0, maxb = 0;
	//����
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

	cout << "�����Ϊ" << arr[maxa][maxb] << endl;
	cout << "�±�Ϊ" << maxa << "," << maxb << endl;
	
	delete[]arr;
	return 0;

}