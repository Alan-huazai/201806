 ///
 /// @file    liu.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-20 12:11:08
 ///
 
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
			cout<<"hello"<<endl;
		}
		void display()
		{
			cout<<_dreal<<"+"<<_dimge<<endl;
		}
	private:
		double _dreal;
		double _dimge;
};
int main(void)
{
	Complex com;
	com.display();
	return 0;
}
