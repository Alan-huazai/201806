 ///
 /// @file    fileIO1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-16 20:14:13
 ///
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::vector;

vector<string> lines;
void test1()
{
	//文件输入流必须要求文件存在
//	ifstream ifs("Student.cc");
	ifstream ifs;
	ifs.open("Student.cc");
	if(!ifs)
	{
		cout<<"ifstream open error!"<<endl;
		return;
	}
	//string word;
	string line;
	lines.reserve(50);
	//while(ifs>>word) //默认情况下以空格作为分隔符
	while(getline(ifs,line))
	{
		//cout<<word<<endl;
		lines.push_back(line);//将每一行放到容器中去
		//cout<<line<<endl;
	}
	//然后遍历数组
	//在编译时需要加上 -std=c++11编译选项
	for(auto &elem :lines) //引用符号不能少，如果没有会进行复制
	{
		cout<<elem<<endl;
	}
	ifs.close();
}

//文件输出流,可以直接创建文件，即使文件不存在
//如果该文件存在，则会清空文件中的内容
void test2()
{
	string filename="test,txt";
	ofstream ofs(filename);
	if(!ofs.good())
	{
		cout<<"ofstream open error!"<<endl;
		return;
	}

	for(auto &elem :lines)
	{
		ofs<<elem<<endl;
	}
	ofs.close();//使用流文件的时候注意关闭流文件
}
void test3()
{
	//app模式就是在文件的末尾进行写操作
	ofstream ofs("test.txt",std::ios::app);
	if(!ofs.good())
	{
		cout<<"ofstream open error"<<endl;
		return ;
	}
	ofs<<"that's new lines";
	ofs.close();
}

int main(void)
{
	//test1();
	//test2();
	test3();
	return 0;
}
