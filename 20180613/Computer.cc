 ///
 /// @file    Computer.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-13 02:24:37
 ///
#include <string.h> 

#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	void print()
	{
		cout<<"品牌："<<_brand<<endl;
		cout<<"价格："<<_price<<endl;
	}
	void setBrand(const char *brand)
	{
		strcpy(_brand,brand);
	}
	void setPrice(float price)
	{
		_price=price;
	}


private:
	char _brand[20];//数据成员
	float _price;
};
int main(void)
{
	Computer com;
	com.setBrand("Xiaomi");
	com.setPrice(2699);
	com.print();
	return 0;
}
