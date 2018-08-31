 ///
 /// @file    Computer2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-13 08:36:58
 ///
#include <string.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
	public:
		
		//系统提供的复制构造函数,提供的是一个浅拷贝
		Computer(const Computer &rhs)
		:_brand(new char[strlen(rhs._brand)+1])
		 ,_price(rhs._price)
		{
			cout<<"我是系统的默认复制构造函数"<<endl;
			strcpy(_brand,rhs._brand);
		}


		Computer(const char * brand,float price)
		//:_brand(brand)//浅拷贝
		:_brand(new char[strlen(brand)+1])
		 //:_brand((char*)malloc(strlen(brand)+1))
		 ,_price(price)
		{
			cout<<"Computer(const char *brand,float price)"<<endl;
			strcpy(_brand,brand);
		}


		//每个成员函数的第一个参数就是this指针
		void print()
		{
			cout<<"品牌："<<_brand<<endl;
			cout<<"价格:"<<_price<<endl;
		}
		~Computer()
		{
			cout<<"~Computer"<<endl;
			delete []_brand;
			_brand=NULL;
		}

	private:
		char *_brand;
		float _price;
};



int main(void)
{
	char p[]="xiaomi";
	Computer com(p,2699);//栈对象
	com.print();
	Computer com2=com;
	com2.print();
	return 0;
}
