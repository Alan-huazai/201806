 ///
 /// @file    sequence2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-27 11:17:11
 ///
 
#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::list;
using std::cout;
using std::endl;
void test1()
{
	vector<int> vecInt={1,2,3};
	
	auto it=vecInt.begin();
	cout<<"*it="<<*it<<endl;
	++it;
	vecInt.insert(it,20);
	
	for(auto &elem:vecInt)
	{
		cout<<elem<<endl;
	}

}
int main(void)
{
	test1();
	return 0;
}
