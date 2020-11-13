#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char c;
	if (argc != 3)
		cout << "参数不对\n";
	else
	{
		c = *argv[1];
		switch (c)
		{
		case '+':
		{
			cout << "执行加密程序段" << endl;
		}
		break;
		case '-':
		{
			cout << "执行解密程序段" << endl;
		}
		break;
		default:cout << "第二个参数错误！" << endl;
		}
	}
	return 0;
}