 ///
 /// @file    test1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-17 15:31:44
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int main(void)
{
	int a=1;
	int b=2;
	int &ref=a;
	cout<<"&ref="<<static_cast<void *>(&ref)<<endl;
	ref=b;
	cout<<"&ref="<<static_cast<void *>(&ref)<<endl;
	cout<<"ref="<<ref<<endl;

	return 0;
}
