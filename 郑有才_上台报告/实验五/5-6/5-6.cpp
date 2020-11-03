#include<iostream>
#include<string.h>
using namespace std;

class str
{
private:
	char str1[80], str2[80];
	char ch;

public:
	str( char a[], char b[], char c)
	{
		strcpy_s(str1, a);
		strcpy_s(str2, b);
		ch = c;
	}
	void opre();
};

void str::opre()
{
	if (ch == '+')
	{
		cout << str1<<str2 << endl;//输出：abcd   12345
	}
	else 
	{
		int i = 0;
		int pos = 0;
		//去空格
		while (str1[i]!=' ')
		{
			i++;
		}
		pos = i;
		for (i = 0; i < pos; i++)
			cout << str1[i] ;
		cout << str2<<endl;//连接
	}
}

int main()
{
	str A("abcd    ", "12345", '+');
	A.opre();
	str B("abcd    ", "12345", '-');
	B.opre();
}