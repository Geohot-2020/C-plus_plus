#include<iostream>
using namespace std;

class Parent
{
public:
	int pubD;
protected:
	int portD;
private:
	int privD;
};

class Son :public Parent
{
public:
	void fn()
	{
		int x;
		x = pubD;
		x = portD;
		// x = privD;	//���ɷ���
	}
};

class Daughter :private Parent
{
public:
	void fn()
	{
		int y;
		y = pubD;	// ��Ϊ˽��
		y = portD;	// ��Ϊ˽��
		// y = privD;	// ���ɷ���
	}
};

int main()
{
	// ����
	Parent p;			
	p.pubD = 10;
	// p.portD = 10;	// ���ɷ���
	// p.privD = 10;	// ���ɷ���

	// ����������
	Son s;
	s.pubD = 20;
	// s.portD = 20;	// ���ɷ���
	// s.priD = 20;		// ���ɷ���

	// ˽��������
	Daughter d;
	// d.pubD = 30;		// ���ɷ���
	// d.portD = 30;	// ���ɷ���
	// d.priD = 30;		// ���ɷ���
	return 0;
}