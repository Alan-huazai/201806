 ///
 /// @file    fileIO3.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-17 13:29:27
 ///

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::string;
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<string> lines;

void test1(void)
{
	//文件输入流要求文件必须存在
	ifstream ifs("ceshi.txt");
	if(!ifs.good())
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	//将文件中的数据读出，并且打印出来
	//string word;   //
	string line; //让line每次获取一行
	//vector<string> lines;
	lines.reserve(50);
	//while(ifs>> word)  //将ifs中的文件读到word中，以空格作为分隔符
	while(getline(ifs,line))
	{
	//	cout<<word<<","<<endl;;
	//	cout<<line<<endl;
		lines.push_back(line);//将字符串放入数组
	}

	for(auto &elem :lines)
	{
		cout<<elem<<endl;
	}
//	cout<<endl;
	ifs.close();
}

void test2(void)
{
	string filename="test2.txt";
	ofstream ofs(filename);
	if(!ofs.good())
	{
		cout<<"ofstream open error!"<<endl;
	}
	for(auto &elem :lines)
	{
		ofs<<elem<<endl;
	}
	ofs.close();
}

void test3(void)
{
	ofstream ofs("test3.txt",std::ios::ate);
	if(!ofs.good())
	{
		cout<<"打开失败！就重新创建一个文件"<<endl;
	}
	//ofs<<"Hello";
	int position=ofs.tellp();//能够告知游标的位置
	cout<<"position="<<position<<endl;
	ofs.close();

}

void test4(void)
{
	fstream fs("test4.txt");
	if(!fs.good())
	{
		cout<<"打开文件失败！"<<endl;
		return;
	}
	int number;
	int pos=fs.tellg();
	cout<<"pos="<<fs.tellg()<<endl;
	//输入5个数据,放入文件中去
	for(int idx=0;idx<5;idx++)
	{
		cin>>number;
		fs<<number<<" ";
	}
	cout<<"pos="<<fs.tellg()<<endl;
	//输入5个数据,放入文件中去
	//从文件中读出5个数据
	fs.seekg(std::ios::beg);
	cout<<"pos="<<fs.tellg()<<endl;
	for(int idx=0;idx<5;idx++)
	{
		fs>>number;
		cout<<"number="<<number<<endl;
	}
	fs.close();
}
void test5(void)
{
	//ate只能用于输入流文件，定位到文件末尾
	ifstream ifs("test5.txt",std::ios::ate);
	if(!ifs.good())
	{
		cout<<"打开文件错误"<<endl;
		return ;
	}
	int pos=ifs.tellg();
	cout<<"pos="<<pos<<endl;
	ifs.close();
}
int main(void)
{
	//test1();
	//test2();
//	test3();
	//test4();
	test5();
	return 0;
}
