 ///
 /// @file    standardIO2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-16 18:16:59
 ///
 
#include <iostream>
#include <limits>
using std::cout;
using std::endl;
using std::cin;
int main(void)
{
	int num;
	cout<<"请输入一个整数:"<<endl;
	while(cin>>num,!cin.eof())
	{
		if(cin.bad())
		{
			cout<<"io has corrupt"<<endl;
			return -1;
		}
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			cout<<"请输入一个整形的数:"<<endl;
			continue;
		}
		cout<<"num="<<num<<endl;
	}
	return 0;
}
