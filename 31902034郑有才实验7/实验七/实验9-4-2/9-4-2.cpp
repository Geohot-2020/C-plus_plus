#include<string.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
char * a(char x[], char y[])
{
	strcpy_s(x, 4,y);
	return x;
}

int b(int x, int y)
{
	return x - y;
}

int c(int x, int y)
{
	return x * y;
}

int d(int x, int y)
{
	return x / y;
}

void main()
{
	char s1[] = "10086";
	char s2[] = "123";
	char s3;
	s3 = *(a(s1, s2));
	cout << s3;
	/*char ch;
	int(*p[4])(int, int) = { a,b,c,d }, i, x, y, z;
	int k = 12;
	srand((int)time(0));
	while (k)
	{
		for (i = 0; i < 100; i++)
		{
			x = (int)(100.0*rand() / (RAND_MAX + 1.0)) % 10;
			y = (int)(100.0*rand() / (RAND_MAX + 1.0)) % 10;
			z = (int)(100.0*rand() / (RAND_MAX + 1.0)) % 4;
		}
		switch (z)
		{
		case 0:ch = '+'; break;
		case 1:ch = '-'; break;
		case 2:ch = '*'; break;
		case 3:ch = '/'; break;
		}
		i = (*p[z])(x, y);
		cout << x << ch << y << '=' << i << endl;
		k--;
	}*/
}