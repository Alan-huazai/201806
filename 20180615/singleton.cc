 ///
 /// @file    singleton.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-15 17:11:59
 ///
//单例设计模式要求： 通过该类只能产生 一个对象
//1、该对象不能是全局对象或者是栈对象
//2、
#include <iostream>
using std::cout;
using std::endl;

class Singleton
{
public:

private:
	Singleton()//要让Singleton s1;语句出错，执行上述语句时会调用默认的无参构造函数，就将默认构造函数放进private中就可以了
	{
		
	}
};

//Singleton s3;
int main(void)
{
	
	Singleton s1;//希望该语句编译出错
	//Singleton s2;
	return 0;
}
