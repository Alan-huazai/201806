 ///
 /// @file    reverse_itreator.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-29 07:46:44
 ///
 
#include <iostream>
#include <iterator>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
void test1()
{
	vector<int> numbers{1,2,3,4,5,6,7,8,9};
	vector<int>::const_reverse_iterator cit;
	for(cit=numbers.rbegin();cit!=numbers.rend();++cit)
	{
		cout<<*cit<<" ";
	}
	cout<<endl;
}
int main(void)
{
	test1();
	return 0;
}
