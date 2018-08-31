 ///
 /// @file    standardIO.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-16 17:54:54
 ///
#include <string> 
#include <limits>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
void printCin()
{
	cout<<"cin's badbit="<<cin.bad()<<endl;
	cout<<"cin's failbit="<<cin.fail()<<endl;
	cout<<"cin's eofbit="<<cin.eof()<<endl;
	cout<<"cin's goodbit="<<cin.good()<<endl;
	
}
int main(void)
{
	printCin();
	cout<<endl;
	cout<<"sizeof(cin)="<<sizeof(cin)<<endl;
	cout<<"sizeof(cout)="<<sizeof(cout)<<endl;
	
	int num;
	while(cin>>num)
	{
		cout<<"num="<<num<<endl;
	}
	printCin();
	cout<<endl<<"重置流文件的状态"<<endl;
	cin.clear();
	printCin();

	cout<<"清空缓冲区"<<endl;
	cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	string line;
	cin>>line;
	cout<<"line="<<line<<endl;

	return 0;
}


