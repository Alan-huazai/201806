 ///
 /// @file    Computer1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-14 16:04:29
 ///
#include <string.h> 
#include <iostream>
using std::cout;
using std::endl;
class Computer
{
public:
	Computer(const char *brand,float price)
	:_brand(new char[strlen(brand)+1])
	 ,_price(price)
	{
		strcpy(_brand,brand);
		cout<<"我是构造函数"<<endl;
	}
	void print(/*Computer * const this*/)//this指针的原型
	{
		cout<<"品牌:"<<this->_brand<<endl;
		cout<<"价格："<<this->_price<<endl;
	}
	//系统提供的赋值运算符函数
	/*Computer& operator=(const Computer & ref)
	{
		_brand=ref._brand;
		_price=ref._price;
	}
	*/
	Computer & operator=(const Computer &ref)
	{
		if(this!=&ref)
		{
			delete []_brand;
			_brand=new char[strlen(ref._brand)+1];
			strcpy(_brand,ref._brand);
			_price=ref._price;
		}
		return *this;//返回的是this指针所指向的对象
	}
	~Computer()
	{
		cout<<"我是析构函数"<<endl;
		delete []_brand;
	}
private:
	char * _brand;
	float _price;
};
int main(void)
{
	Computer com1("xiaomi",2699);
	Computer com2("mac",10000);
	com1.print();
	com2.print();
	cout<<"_________________"<<endl;
	com2=com1;  //他所使用的是系统提供的赋值运算符函数，系统默认的赋值运算符所采用的是浅拷贝的方式，故不满足要求，需要重写
	com2.print();
	return 0;
}
