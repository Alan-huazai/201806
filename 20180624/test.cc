 ///
 /// @file    test.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-24 14:05:46
 ///
 
#include <iostream>
using std::cout;
using std::endl;
using std::string;
int main(void)
{
	string s1="hello";
	string s2[]="world";
	string *p1=s2;
	cout<<"s1="<<s1<<endl;
	cout<<"s2="<<s2<<endl;
	cout<<"*p1="<<*p1<<endl;
	return 0;
}
