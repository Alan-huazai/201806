 ///
 /// @file    Computer3.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-14 21:25:07
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

//静态成员函数由于没有this指针，所以不能直接访问非静态的数据成员和成员杉树
	static void print(Computer &  p1)

	{
		cout<<"品牌："<<p1._brand<<endl;
		cout<<"价格："<<p1._price<<endl;
	}

	~Computer()
	{
		delete []_brand;
		cout<<"我是析构函数"<<endl;
	}
private:
	char * _brand;
	float _price;
};

int main(void)
{
	Computer p1("xiaomi",2699);
	//p1.print(p1);
	Computer::print(p1);//静态成员函数可以直接通过类名进行调用
	return 0;
}
