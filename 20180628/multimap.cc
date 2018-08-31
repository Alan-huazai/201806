 ///
 /// @file    multimap.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-28 08:28:42
 ///
 
#include <iostream>
#include <utility>
#include <string>
#include <map>
using std::multimap;
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
	multimap<int,string,std::greater<int>> multimapIntStr={
		pair<int,string>(1,"北京"),
		pair<int,string>(2,"深圳"),
		pair<int,string>(3,"广州"),
		pair<int,string>(2,"苏州")
	};

	for(auto &elem:multimapIntStr)
	{
		cout<<elem.first<<"--->"<<elem.second<<endl;
	}

	multimap<int,string,std::greater<int>>::const_iterator cit;
	for(cit=multimapIntStr.begin();cit!=multimapIntStr.end();++cit)
	{
		cout<<cit->first<<"--->"<<cit->second<<endl;
	}
//	cout<<multimapIntStr[0]<<endl;
//	cout<<multimapIntStr[1]<<endl;
//	multimapIntStr[0]="上海";
//	cout<<multimapIntStr[0]<<endl;
}
int main(void)
{
	//test1();
	test2();
	return 0;
}
