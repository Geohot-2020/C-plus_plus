#pragma once
#include <iostream>
using namespace std;

class Addn_m {
private:
	int m, n;

public:
	Addn_m(int x, int y) { m = x; n = y; }
	double add(int x, int y) {
		int t;
		double sum = 0;
		//������
		t = n;
		//ʵ���ۼ�
		while (t <= m) {
			//*1.0Ϊ��С����ʽ�������cһ��
			sum += 1.0 / t;
			t = t + 1;
		}
		return sum;
	}
};
