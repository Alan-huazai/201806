 ///
 /// @file    Singleton2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-15 17:44:14
 ///
#include <stdio.h> 
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:
	static Singleton * getInstance()
	{
		if(NULL==_pInstance)
		{
			_pInstance=new Singleton;
			cout<<"_pInstance="<<static_cast<void*>(_pInstance)<<endl;
			cout<<"我执行了一次"<<endl;
		}
		cout<<"我应该执行三次"<<endl;
		return _pInstance;	
	}
private:
	Singleton()
	{
	}
	static Singleton *_pInstance;//用一个变量来保存第一个对象的地址
};

Singleton *Singleton::_pInstance=NULL;

int main(void)
{
	Singleton *p1=Singleton::getInstance();
	Singleton *p2=Singleton::getInstance();
	Singleton *p3=Singleton::getInstance();
	cout<<"&p1="<<static_cast<void*>(p1)<<endl;
	cout<<"&p2="<<static_cast<void*>(p2)<<endl;
	cout<<"&p3="<<static_cast<void*>(p3)<<endl;
//	printf("&p1=%p\n",&p1);
//	printf("&p2=%p\n",&p2);
//	printf("&p3=%p\n",&p3);
	return 0;
}
