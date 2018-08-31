 ///
 /// @file    const2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-12 18:47:35
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{

	int a=1;
	int b=2;
	//1、常量指针
	const int *p1=&a;
	//*p1=2;//error,只能改变他的指向，不能改变他所指向的值的大小
	p1=&b;
	cout<<"*p1="<<*p1<<endl;

	//2、同第一种
	int const *p2=&a;
	p2=&b;
	cout<<"*p2="<<*p2<<endl;

	//3、
	int * const p3=&a;
	*p3=5;
	cout<<"*p3="<<*p3<<endl;

	return 0;
}
