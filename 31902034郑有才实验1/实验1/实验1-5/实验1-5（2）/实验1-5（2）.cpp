#include <iostream>
using namespace std;
class cube
{
private:
	int a, b, c;

public:
	cube(int x, int y, int z) { a = x; b = y; c = z; }
	int Volume();//��Ա��������*1

	void show();//��Ա��������*2
};

int cube::Volume()//���ⶨ��Volume����
{
	int z;
	z = a * b * c;
	return z;
}

void cube::show()//���ⶨ��show����
{
	cout << "�����������" << Volume() << endl;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cube s(a, b, c);
	s.show();
}