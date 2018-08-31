 ///
 /// @file    Singleton.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-23 17:30:06
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class Singleton
{
public:
	static Singleton* getInstance()
	{
		if(NULL==_ptr)
		{
			_ptr=new Singleton();
		}
		return _ptr;
	}
	
	static void destroy()
	{
		if(_ptr)
		{
			cout<<"destroy()"<<endl;
			delete _ptr;
		}
	}
private:
	Singleton(){ cout<<"Singleton()"<<endl;}
	~Singleton(){cout<<"~Singleton()"<<endl;}
	static Singleton * _ptr;
};
Singleton* Singleton::_ptr=NULL;
int main(void)
{
	Singleton *p1=Singleton::getInstance();
	Singleton *p2=Singleton::getInstance();
	cout<<"p1="<<static_cast<void*>(p1)<<endl;
	cout<<"p2="<<static_cast<void*>(p2)<<endl;
	Singleton::destroy();
	return 0;
}
