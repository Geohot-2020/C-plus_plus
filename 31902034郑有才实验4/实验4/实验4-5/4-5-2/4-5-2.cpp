#include<iostream>
using namespace std;
#include<string.h>
class ojbk   //类名不能用count
{
private:
	char str[100];
public:
	ojbk(char s[]) { strcpy_s(str, s); }//strcpy is unsafe
	void computer();
};

void ojbk::computer()
{
	int Letters = 0, Digital = 0, Space = 0, Other = 0;
	char ch = {};//暂存变量
	for (int i = 0; str[i]; i++)//逐个读取
	{
		ch = str[i];
		if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z')//字母
			Letters++;
		else if (ch >= '0'&&ch <= '9')//数字
			Digital++;
		else if (ch == ' ')//空格
			Space++;
		else   //其他
			Other++;
	}
	cout << "字母：" << Letters << "\n数字：" << Digital << "\n空格：" << Space << "\n其他：" << Other << endl;
}

int main()
{
	char s[100];
	gets_s(s);
	ojbk A(s);
	A.computer();
	
}