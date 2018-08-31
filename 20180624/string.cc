 ///
 /// @file    string.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-24 15:21:16
 ///
#include <stdio.h>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
int main(void)
{
	string s1="helloworld";
	string s2="ffdsdfsdfsdfsdfsdfsdfsdf";
	string s3=s2;
	string s4=s3;

	cout<<"sizeof(s1)="<<sizeof(string)<<endl;
	cout<<"sizeof(s1)="<<sizeof(s1)<<endl;
	//cout<<"&s2="<<&s2<<endl;  error,获取不到字符串的内容
	cout<<"s2="<<s2.c_str()<<endl;
	cout<<"s2[0]="<<s2[0]<<endl;
	cout<<"----------"<<endl;
	cout<<"s1="<<static_cast<const void*>(s1.c_str())<<endl;
	//cout<<"&s1[0]="<<static_cast<void*>(&s1[0])<<endl;

	cout<<"s2="<<static_cast<const void*>(s2.c_str())<<endl;
	cout<<"s3="<<static_cast<const void*>(s3.c_str())<<endl;
	cout<<"s4="<<static_cast<const void*>(s4.c_str())<<endl;
	
	return 0;
}
