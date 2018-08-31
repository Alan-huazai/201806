 ///
 /// @file    fileIO1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-16 20:14:13
 ///
#include <fstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

void test0()
{
	//文件输入流必须要求文件存在
	ifstream ifs("Student.cc");
	if(!ifs)
	{
		cout<<"ifstream open error!"<<endl;
		return;
	}
	//string word;
	string line;
	//while(ifs>>word) //默认情况下以空格作为分隔符
	while(getline(ifs,line))
	{
		//cout<<word<<endl;
		cout<<line<<endl;
	}
}


int main(void)
{
	test0();
	return 0;
}
