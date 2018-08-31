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
		_totalPrice+=_price;
	}
	void print()
	{
		cout<<"品牌:"<<this->_brand<<endl;
		cout<<"价格："<<this->_price<<endl;
	}
	void printTotalPrice()
	{
		cout<<"总价:"<<_totalPrice<<endl;
	}
private:
	char * _brand;
	float _price;
	static float _totalPrice;//静态数据成员，必须初始化，并且在类外面进行初始化
};
float Computer::_totalPrice=0;
int main(void)
{
	Computer com1("xiaomi",2699);
	com1.printTotalPrice();
	
	Computer com2("thinkpad",3000);
	com2.printTotalPrice();

	Computer com3("mac",10000);
	com3.printTotalPrice();
	
	cout<<"sizeof(Computer)"<<sizeof(Computer)<<endl;
	return 0;
}
