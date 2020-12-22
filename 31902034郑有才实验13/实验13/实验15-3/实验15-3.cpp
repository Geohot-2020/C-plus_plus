// ʵ��15-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void sort(T *array, int size)
{
	int i, j;
	T temp;
	for(i=0;i<size-1;i++)
		for(j=0;j<size-i-1;j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
}

int main()
{
	int intarray[7] = { 50,12,9,34,7,8,5 };
	int i;
	// ��������
	sort(intarray, 7);
	for (i = 0; i < 7; i++)
		cout << intarray[i] << " ";
	cout << endl;
	// ����������
	double doublearray[7] = { 22.50,12.34,31.9,3.4,78.7,8.5,9.5 };
	sort(doublearray, 7);
	for (i = 0; i < 7; i++)
		cout << doublearray[i] << " ";
	cout << endl;
	// �ַ�������
	char chararray[7] = { 't','p','a','h','e','i','h' };
	sort(chararray, 7);
	for (i = 0; i < 7; i++)
		cout << chararray[i] << " ";
	cout << endl;
    return 0;
}

