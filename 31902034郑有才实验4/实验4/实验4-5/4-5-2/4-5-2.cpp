#include<iostream>
using namespace std;
#include<string.h>
class ojbk   //����������count
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
	char ch = {};//�ݴ����
	for (int i = 0; str[i]; i++)//�����ȡ
	{
		ch = str[i];
		if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z')//��ĸ
			Letters++;
		else if (ch >= '0'&&ch <= '9')//����
			Digital++;
		else if (ch == ' ')//�ո�
			Space++;
		else   //����
			Other++;
	}
	cout << "��ĸ��" << Letters << "\n���֣�" << Digital << "\n�ո�" << Space << "\n������" << Other << endl;
}

int main()
{
	char s[100];
	gets_s(s);
	ojbk A(s);
	A.computer();
	
}