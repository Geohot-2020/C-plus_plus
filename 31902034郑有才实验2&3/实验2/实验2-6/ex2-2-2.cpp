#include "ex2-2-1.cpp"
int main()
{
	int a, b, c,x,y;
	cout << "������������������"<<endl;
	cin >> a >> b >> c;
	triangle A(a, b, c);
	cout << "�ܳ�Ϊ��" << A.circumference(a,b,c) << "�����Ϊ��" << A.square(a,b,c) << endl;
	cout << "���������ε������Խ��ߣ�"<<endl;
	cin >> x >> y;
	diamond B(x, y);
	cout << "�ܳ�Ϊ��" << B.circumference(x,y) << "�����Ϊ��" << B.square(x,y) << endl;
}