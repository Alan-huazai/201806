 ///
 /// @file    template2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-24 14:20:52
 ///
 
#include <iostream>
using std::cout;
using std::endl;
template <typename T,int number=1>
T func(T x,T y)
{
	return x*y*number;
}
int main(void)
{
	int a=1,b=1;
	cout<<"func(a,b)="<<func<int>(a,b)<<endl;
	cout<<"func(a,b)="<<func<int,2>(a,b)<<endl;
	return 0;
}
