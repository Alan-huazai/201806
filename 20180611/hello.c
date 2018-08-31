 ///
 /// @file    hello.c
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-11 14:04:31
 ///
 
#include <iostream>
using std::cout;
using std::endl;
int  main(void)
{
//	cout<<"Hello"<<endl;
	extern "C"
	{
		printf("Hello\n");
	}

	
	return 0;
}
