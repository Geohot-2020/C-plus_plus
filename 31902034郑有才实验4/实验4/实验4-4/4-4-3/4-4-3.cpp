#include<iostream>
#include<math.h>
using namespace std;

inline float f(float x)
{
	return x*x-2*x-6;
}

class funroot
{
private:
	float left, right;
public:
	funroot(float a, float b) { left = a; right = b; }
	float root()
	{
		float middle, ym, y1, yr;
		y1 = f(left);
		yr = f(right);
		while (y1*yr > 0)
		{
			y1 = f(left);
			yr = f(right);
			cout << "请输入左右边界：" << endl;
			cin >> left >> right;
		};
		y1 = f(left);
		yr = f(right);

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
		return middle;
	}
};



int main()
{
	float left, right;
	cout << "请输入左右边界：" << endl;
	cin >> left >> right;
	funroot A(left, right);

	cout << "\n 方程的根是：" << A.root() << endl;
	return 0;
}

