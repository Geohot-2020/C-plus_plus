#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char c;
	if (argc != 3)
		cout << "��������\n";
	else
	{
		c = *argv[1];
		switch (c)
		{
		case '+':
		{
			cout << "ִ�м��ܳ����" << endl;
		}
		break;
		case '-':
		{
			cout << "ִ�н��ܳ����" << endl;
		}
		break;
		default:cout << "�ڶ�����������" << endl;
		}
	}
	return 0;
}