 ///
 /// @file    new.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-12 17:15:15
 ///
#include<stdlib.h> 
#include <iostream>
using std::cout;
using std::endl;
int main(void)
{

	//C语言中的堆空间申请
	int *pa=(int *)malloc(sizeof(int));
	*pa=10;
	cout<<"*pa="<<*pa<<endl;

	//C++中进行堆空间的申请
	int *p=new int(100);
	cout<<"*p="<<*p<<endl;
	return 0;
}
