#include<iostream>
using namespace std;
#include <cstring>
int main()
{
	char s1[11] = "2";
	char s2[20] = "33" ;
	strcat_s(s1,s2);
	cout << s1;

}