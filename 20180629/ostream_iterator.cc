 ///
 /// @file    ostream_iterator.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-29 07:12:39
 ///
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using std::copy;
using std::cout;
using std::endl;
using std::vector;
void test1(void)
{
	vector<int> numbers{1,2,3,4,5,6,7};
	//将输出流操作看成是一个迭代器，容器的操作是由迭代器来完成
	std::ostream_iterator<int> osi(cout,"-");
	copy(numbers.begin(),numbers.end(),osi);  //*osi=*numbers.beign()
	cout<<endl;
}
int main(void)
{
	test1();
	return 0;
}
