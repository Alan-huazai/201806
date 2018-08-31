 ///
 /// @file    reference2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-12 19:35:05
 ///
 
#include <iostream>
using std::cout;
using std::endl;


int arr[5]={1,2,3,4,5};
//引用作为函数的返回值
//如果直接返回int型的数据，return时是要进行复制的 
int func()
{
	return arr[0];
}

int &func2()
{
	return arr[0];
}

int &func4()
{
	int *p=new int(10);
	return *p;
}

int main(void)
{
	//func2()=10;
	//cout<<"arr[0]="<<arr[0]<<endl;
	int &ref=func4();
	cout<<"ref="<<ref<<endl;
	delete &ref;
	
	
	return 0;
}
