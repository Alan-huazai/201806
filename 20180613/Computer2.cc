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
		Computer(const char * brand,float price)
		//:_brand(brand)//浅拷贝
		:_brand(new char[strlen(brand)+1])
		 //:_brand((char*)malloc(strlen(brand)+1))
		 ,_price(price)
		{
			cout<<"Computer(const char *brand,float price)"<<endl;
			strcpy(_brand,brand);
		}
		
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

	Computer *q=new Computer("mac",10000);//堆对象
	q->print();
	delete q;
	return 0;
}
