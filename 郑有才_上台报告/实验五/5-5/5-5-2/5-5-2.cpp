#include <iostream>
using namespace std;

class inve
{
private:
	char a[10];
public:
	inve(char x[]) {
			strcpy_s(a,strlen(x)+1, x);//strlen()��ʹ�ã��������������ַ��������ǲ�����'\0����,Ҫ��һ��
	};
	void inv();
	void inv(int n);
	void print();
};


void inve::inv()
{
	char b[10];//��ŵ���
	for (int i = 0; i <= 9; i++)
	{
		b[i] = a[9 - i];
		cout << b[i] << " ";
	}
	cout << endl;

}

void inve::inv(int n)
{
	char b[10];//����
	for (int i = 0; i <= n; i++) {
		b[9 - i] = a[i];
	}
	for (int i = 10 - n; i < 10; i++)
		cout << b[i] << " ";
	for (int i = n; i < 10; i++)
		cout << a[i] << " ";
}

void inve::print()
{
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	char x[10];
	
	for (int i = 0; i < 10; i++)
		cin >> x[i];
	
	inve A(x);

	A.inv();

	int n;
	cin >> n;
	A.inv(n);
	return 0;
}