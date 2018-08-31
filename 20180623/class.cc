 ///
 /// @file    class.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-23 13:57:21
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int x=100;
int z=200;

namespace wd
{
	int x=10;
class Example
{
public:
	Example(int ix)
	:x(ix)
	{
	
	}
	void display(int x)
	{
		cout<<"形参x="<<x<<endl;
		cout<<"Example::x="<<Example::x<<endl;
		cout<<"Example::x="<<this->x<<endl;
		cout<<"::x="<<::x<<endl;
	}
private:
	int x;
};
}//end of namespace wd
int main(void)
{
	wd::Example e(1);
	e.display(2);
	return 0;
}


