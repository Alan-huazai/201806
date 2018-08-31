 ///
 /// @file    stringIO2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-17 13:24:44
 ///
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
using std::ostringstream;
using std::istringstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::stringstream;
using std::string;
void test1(void)
{
	int a=10,b=20;
	stringstream ss; 
	ss<<"a= "<<a<<" b= "<<b<<endl;//字符串输出流
	string line=ss.str();
	cout<<"line= "<<line<<endl;
	string word;
	string number;
	cout<<"-----------------------------"<<endl;
	while(!ss.eof())
	{
		ss>>word; //字符串输入流
		ss>>number;
		cout<<"word="<<word<<endl;
		cout<<"number="<<number<<endl;
	}
}

//将整形转换成字符串
string int2string(int number)
{
	ostringstream oss;
	oss<<number;
	return oss.str();
}
void readConfig()
{
	istringstream iss;
	string key;
	string value;
	ifstream ifs("my.conf");
	if(!ifs.good())
	{
		cout<<"打开配置文件失败！"<<endl;
		return ;
	}
	string line;
	//每次获取一行数据
	while(getline(ifs,line))
	{
		istringstream iss(line);
		iss>>key>>value;
		cout<<key<<"--->"<<value<<endl;
	}


}
int main(void)
{
	//test1();
	readConfig();
	return 0;
}
