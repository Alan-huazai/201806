 ///
 /// @file    reference.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-12 19:19:54
 ///
 
#include <iostream>
using std::cout;
using std::endl;
//函数传参的方式--值传递---进行复制
void swap1(int p,int q)
{
	int temp=p;
	p=q;
	q=temp;
}
//函数传递的方式   地址传递---值传递---进行复制
void swap2(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
//函数传递的方式   引用传递---没有复制，直接操作实参本身
//执行效率要比值传递要高
void swap3(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main(void)
{
	int a=10,b=1000;
	swap3(a,b);
	cout<<"a="<<a<<endl
		<<"b="<<b<<endl;
	return 0;
}
