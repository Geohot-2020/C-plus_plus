#include<iostream>
using namespace std;

class Cat
{
private:
	char color[20];
	int weight;
	int age;
public:
	Cat(char *c, int w, int a)	//����
	{
		strcpy_s(color, c);
		weight = w;
		age = a;
	}
	//��ʾ����
	void show()
	{
		cout << "��ɫ��" << color << ",���أ�" << weight << "�����䣺" << age;
	}
};
	

int main()
{
	char color[20];
	int weight;
	int age;
	cout << "�����������ɫ�����أ�����" << endl;
	//����
	cin >> color;
	cin >> weight;
	cin >> age;
	//������
	Cat cat1 = Cat(color, weight, age);
	//չʾ����
	cat1.show();
	return 0;
}