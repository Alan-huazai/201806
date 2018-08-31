 ///
 /// @file    empty.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-11 19:53:09
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Empty
{
	
};

//空类占据一个字节的大小，
//由空类创建不同的对象时，为了区分出他们是不同的对象
//还是要给出1个字节的空间
int main(void)
{
	Empty e1;
	Empty e2;
	cout<<sizeof(Empty)<<endl;
	return 0;
}
