 ///
 /// @file    arrow.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-23 07:52:53
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class Data
{
public:
	int length()
	{
		return 5;
	}
};
class DataPtr
{
public:
	DataPtr()
	:_data(new Data)
	{
		cout<<"DataPtr()"<<endl;
	}
	~DataPtr()
	{
		delete _data;
		cout<<"~DataPtr"<<endl;
	}
	Data* operator->()
	{
		return _data;
	}
	Data& operator*()
	{
		return *_data;
	}
private:
	Data * _data;
};
class ThirdLayer
{
public:
	ThirdLayer()
	:_p(new DataPtr)
	{
		cout<<"ThirdLayer"<<endl;
	}
	~ThirdLayer()
	{
		cout<<"~ThirdLayer"<<endl;
		delete _p;
	}
	DataPtr &operator->()
	{
		return *_p;
	}
private:
	DataPtr * _p;
};
int main(void)
{
	DataPtr dp;
	cout<<dp->length()<<endl;
	cout<<dp.operator->()->length()<<endl; //这个是上面的一个完整版本
	cout<<"--------------------"<<endl;
	cout<<(*dp).length()<<endl;
	ThirdLayer th;
	cout<<th->length()<<endl;
	cout<<th.operator->().operator->()->length()<<endl;
	return 0;
}

