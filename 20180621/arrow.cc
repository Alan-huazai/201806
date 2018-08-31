 ///
 /// @file    arrow.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-21 09:20:24
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
}

class Dataptr
{
public:
	Dataptr()
	:_data(new data)
	{
		cout<<"我是构造函数Dataptr"<<endl;
	}
	~Dataptr()
	{
		delete _data;
	}
private:
	
}
