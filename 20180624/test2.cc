 ///
 /// @file    test2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-24 17:22:09
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int main(void)
{
	char *p=new char[5]+4;
//	*(p-4)='a';
	p=p+4;
	*(p-4)='a';


#if 0
	for(int i=0;i<5;++i)
	{
		if(i>=0&&i<4)
		{
			p[i]='a';
		}
		else
		{
			p[i]='b';
		}
	}
#endif
	//cout<<"p[0]="<<p[0]<<endl;
	
	delete []p;
	return 0;
}
