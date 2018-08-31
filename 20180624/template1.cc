 ///
 /// @file    template1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-24 13:30:35
 ///
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
template <typename T>
T add(T a,T b)
{
	return a+b;
}

template <typename T>
T add(T a,T b,T c)
{
	return a+b+c;
}

#if 0
int add(int x,int y)
{
	return x*y;
}
#endif
int test0(void)
{
	int a=1,b=1,c=1;
	cout<<"add(a,b)="<<add<int>(a,b)<<endl; //显示实例化
	cout<<"add(a,b,c)="<<add(a,b,c)<<endl;	//隐式实例化
	return 0;
}


//模板的特例化，他是不能单独存在的
template <>
char * add<char *>(char *p1,char *p2)
{
	char *ptemp=new char[strlen(p1)+strlen(p2)+1]();
	strcpy(ptemp,p1);
	strcat(ptemp,p2);
	return ptemp;
}

int test1(void)
{
	string s1="hello";
	string s2="world";
	cout<<add(s1,s2)<<endl;
	return 0;
}

int main(void)
{
	test1();
	return 0;
}
