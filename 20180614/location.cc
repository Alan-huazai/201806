 ///
 /// @file    location.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-14 22:59:34
 ///
#include <stdio.h> 
#include <iostream>
using std::cout;
using std::endl;
void test0()
{
	int c=10;
	printf("c的地址=%p\n",&c);
	cout<<"c的地址="<<static_cast<void *>(&c)<<endl;
}
int main(void)
{
	test0();
	return 0;
}
