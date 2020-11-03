#include<iostream>
#include<math.h>
using namespace std;
float f(float x)
{
	return 2 * x*x*x - 2 * x*x - 6 * x - 3;
}

int main()
{
	float left, right, middle, ym, y1, yr;
	do
	{
		cout << "请输入左右边界：" << endl;
		cin >> left >> right;
		y1 = f(left);
		yr = f(right);
	} while (y1*yr > 0);

	do
	{
		middle = (right + left) / 2;
		ym = f(middle);
		if (yr*ym > 0)
		{
			right = middle;
			yr = ym;
		}
		else
		{
			left = middle;
			y1 = ym;
		}
	} while (fabs(ym) >= 1e-6);
	cout << "\n 方程的根是：" << middle << endl;
}