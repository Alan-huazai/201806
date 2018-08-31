 ///
 /// @file    singleton.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-15 17:11:59
 ///
//单例设计模式要求： 通过该类只能产生 一个对象
//1、该对象不能是全局对象或者是栈对象
//2、该对象就是一个堆对象
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:
	static Singleton* getInstance()
	{
		if(NULL==_pInstance)
		{
			_pInstance=new Singleton;
		}
		return _pInstance;
	}
private:
	Singleton()//要让Singleton s1;语句出错，执行上述语句时会调用默认的无参构造函数，就将默认构造函数放进private中就可以了
	{
		
	}
	static Singleton *_pInstance;
};
Singleton *Singleton::_pInstance=NULL;//静态数据成员的初始化必须在类外
//Singleton s3;
int main(void)
{
	
	//Singleton s1;//希望该语句编译出错
	//Singleton s2;
	//Singleton *p1=new Singleton;
	//Singleton *p2=new Singleton;
	Singleton *p1=Singleton::getInstance();
	Singleton *p2=Singleton::getInstance();
	Singleton *p3=Singleton::getInstance();
	cout<<"&p1="<<static_cast<void*>(&p1)<<endl;
	cout<<"&p2="<<static_cast<void*>(&p2)<<endl;
	cout<<"&p3="<<static_cast<void*>(&p3)<<endl;
	return 0;
}
