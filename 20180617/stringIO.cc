 ///
 /// @file    stringIO.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-17 09:34:00
 ///
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::stringstream;
using std::string;
using std::ostrinstream;
void test1(void)
{
	int val1=10;
	int val2=20;
	stringstream ss;
	ss<<"val1="<<val1<<" val2="<<val2<<endl;

	string line=ss.str();
	cout<<line<<endl;
}

//将整形转换成字符串
string int2str(int number)
{
	ostringstream oss;
	oss<<number;
	return oss.str()
}

int main(void)
{
	test1();
	return 0;
}
