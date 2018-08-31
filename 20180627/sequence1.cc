 ///
 /// @file    sequence1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-27 10:19:41
 ///
 
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int test1(void)
{
	//C++11里面的初始化方式
	//vector<int> vecInt={1,2,3,4,5};
	vector<int> vecInt;

	//用迭代器的方式
	//int arr[]={1,2,3,4,5};
	//vector<int> vecInt(arr,arr+5);
	cout<<"sizeof(vecInt)="<<sizeof(vecInt)<<endl;
	vecInt.push_back(1);
	cout<<"sizeof(vecInt)="<<sizeof(vecInt)<<endl;
	for(int idx=2;idx!=12;++idx)
	{
		vecInt.push_back(idx);
	}

	cout<<"sizeof(vecInt)="<<sizeof(vecInt)<<endl;
	
	//这是以前用的方法，迭代器
	vector<int>::const_iterator cit=vecInt.begin();
	for(;cit!=vecInt.end();++cit)
	{
		cout<<*cit<<endl;
	}
	
	//这是C++11
	for(auto &elem:vecInt)
	{
		cout<<elem<<endl;
	}

	for(int idx=0;idx!=vecInt.size();++idx)
	{
		cout<<vecInt[idx]<<endl;
	}
	return 0;
}
int main(void)
{
	test1();
	return 0;
}
