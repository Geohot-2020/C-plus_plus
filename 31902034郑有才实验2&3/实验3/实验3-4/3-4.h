#pragma once
#include <iostream>
using namespace std;

class factorial {
private:
	int n;

public:
	factorial(int t) { n = t; }
	int f(int n) {
		//计数器
		int t=1;
		//中间项
		int x = 1;
		int sum=0;
		//阶乘累加
		while (t <= n) {
			x *= t;
			sum += x;
			t++;
		}
		return sum;
	}
};