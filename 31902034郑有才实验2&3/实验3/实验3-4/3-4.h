#pragma once
#include <iostream>
using namespace std;

class factorial {
private:
	int n;

public:
	factorial(int t) { n = t; }
	int f(int n) {
		//������
		int t=1;
		//�м���
		int x = 1;
		int sum=0;
		//�׳��ۼ�
		while (t <= n) {
			x *= t;
			sum += x;
			t++;
		}
		return sum;
	}
};