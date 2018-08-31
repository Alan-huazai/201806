 ///
 /// @file    const.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-12 14:20:48
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{

	//将i的值拷贝给bufSize
	int i=10;
	const int bufSize=i;
	int j=bufSize;
	cout<<"i="<<i<<endl;
	cout<<"bufSize="<<bufSize<<endl;
	cout<<"j="<<j<<endl;
	return 0;
}
