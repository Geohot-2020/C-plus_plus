#include <iostream>
#include<string.h>
using namespace std;

class String
{
private:
	char *str;
public:
	String();
	String(const char *);
	~String() { delete[]str; }
	String & operator+(const String &ss);
	//String & operator-(const String &ss);
	String & operator=(const String &ss);
	void show() { cout << str << endl; }
};

String::String()
{
	str = '\0';
}

String::String(const char *s)
{
	str = new char[strlen(s) + 100];
	strcpy_s(str, strlen(s)+1, s);
}

// +
String & String :: operator+(const String &ss)
{
	strcat_s(this->str,strlen(ss.str)+1, ss.str);
	return *this;
}

// -
//String & String :: operator-(const String &ss)
//{
//	//strcat(this->str, ss.str);
//	this->str = strstr(this->str, ss.str);
//	if (this->str)
//	{
//		//return *(this->str + strlen(ss.str));
//	}
//	//return *this;
//}

String & String ::operator=(const String &ss)
{
	delete[]str;
	int length = strlen(ss.str);
	str = new char[length + 1];
	strcpy_s(str, strlen(ss.str), ss.str);
	return (*this);	
}
int main()
{
	String s1("�㽭��ѧ     "), s3;
	String s2("�����ѧԺ��ӭ��!");
	s3 = s1 + s2;
	s3.show();
	//s3 = s1 - s2;
	s3.show();
	return 0;
}