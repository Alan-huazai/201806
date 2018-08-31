 ///
 /// @file    Computer5.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-13 19:13:05
 ///
 //赋值运算符
 //
#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	//构造函数
	Computer(const char *brand,float price)
	:_brand(new char[strlen(brand)+1])
	 ,_price(price)
	{
		cout<<"Computer(const char *brand,float price)"<<endl;
		strcpy(_brand,brand);
	}

	void print()
	{
		cout<<"品牌:"<<_brand<<endl;
		cout<<"价格："<<_price<<endl;
	}
	
	//系统为我们提供的赋值运算符函数
#if 0
	Computer & operator=(const Computer &ref)
	{
		_brand=ref._brand;
		_price=ref._price;
		return *this;
	}
#endif
	Computer & operator=(const Computer &ref)
	{	
		if(this!=&ref)
		{
		//先回收原来的空间
		delete []_brand;
		_brand=new char[strlen(ref._brand)+1];
		strcpy(_brand,ref._brand);
		_price=ref._price;
		}
		return *this;
	}

	~Computer()
	{
		delete []_brand;
		cout<<"~Computer"<<endl;
	}
private:
	char *_brand;
	float _price;
};

int main(void)
{
	Computer p1("xiaomi",2699);
	Computer p2("mac",10000);
	p1.print();
	p2.print();
	p2=p1;
	p2.print();
	return 0;
}
