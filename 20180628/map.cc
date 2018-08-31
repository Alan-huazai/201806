 ///
 /// @file    map.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-28 08:28:42
 ///
 
#include <iostream>
#include <utility>
#include <string>
#include <map>
using std::map;
using std::string;
using std::cout;
using std::endl;
using std::pair;
void test1(void)
{
	std::pair<int,string> t(600036,"招商银行");
	cout<<t.first<<"--->"<<t.second<<endl;
}


void test2(void)
{
	map<int,string> mapIntStr={
		pair<int,string>(1,"北京"),
		pair<int,string>(2,"深圳"),
		pair<int,string>(3,"广州"),
		pair<int,string>(2,"苏州")
	};
	cout<<"插入之前："<<endl;
	for(auto &elem:mapIntStr)
	{
		cout<<elem.first<<"--->"<<elem.second<<endl;
	}
	pair<map<int,string,std::greater<int>>::iterator,bool> ret=mapIntStr.insert(std::make_pair(3,"武汉"));
	if(ret.second)
	{
		cout<<"添加成功"<<endl;
	}else
	{
		cout<<"此时元素添加失败"<<endl;
		cout<<ret.first->first<<"--->"<<ret.first->second<<endl;
	}
	
	cout<<"插入之后："<<endl;
	for(auto &elem:mapIntStr)
	{
		cout<<elem.first<<"--->"<<elem.second<<endl;
	}
	cout<<"删除元素之后："<<endl;
	mapIntStr.erase(1);
	for(auto &elem:mapIntStr)
	{
		cout<<elem.first<<"--->"<<elem.second<<endl;
	}
}
int main(void)
{
	//test1();
	test2();
	return 0;
}
