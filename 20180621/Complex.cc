 ///
 /// @file    Complex.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-21 07:54:58
 ///
//重载流运算符
#include <iostream>
using std::cout;
using std::endl;
class Complex
{
public:
	Complex(double dreal,double dimge)
	:_dreal(dreal)
	,_dimge(dimge)
	{
		cout<<"我是构造函数"<<endl;
	}
	void display()
	{
		cout<<_dreal;
		if(_dimge>0)
		{
			cout<<"+"<<_dimge<<"i"<<endl;
		}else if(_dimge<0)
		{
			cout<<"-"<<_dimge*(-1)<<"i"<<endl;
		}
	}
	//流对象不能进行复制，所以必须返回对象本身
	//输入输出流运算符进行重载，若依成员函数进行重载，其左操作数与输入输出流对象相矛盾
	friend std::ostream & operator<<(std::ostream &os,const Complex &C1);
	friend std::istream & operator>>(std::istream &is,Complex &C1);
private:
	double _dreal;
	double _dimge;
};

std::ostream & operator<<(std::ostream &os,const Complex &C1)
{
		os<<C1._dreal;
		if(C1._dimge>0)
		{
			os<<"+"<<C1._dimge<<"i"<<endl;
		}else if(C1._dimge<0)
		{
			os<<"-"<<C1._dimge*(-1)<<"i"<<endl;
		}
		return os;
}
//C1为输入的内容
std::istream & operator>>(std::istream &is,Complex &C1)
{
	is>>C1._dreal;
	while(is.get()!='*');
	is>>C1._dimge;
	return is;
}

int main(void)
{
	Complex c1(1,8);
	Complex c2=c1;
	c1.display();
	cout<<"------------------"<<endl;
	cout<<"c1="<<c1<<endl;
	cout<<"------------------"<<endl;
	cout<<">pls input aComplex number:"<<endl;
	std::cin>>c2;
	cout<<"c2="<<c2<<endl;
	return 0;
}
