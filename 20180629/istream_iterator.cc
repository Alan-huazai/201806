 ///
 /// @file    istream_iterator.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-29 07:31:42
 ///
 
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using std::copy;
using std::cin;
using std::vector;
using std::cout;
using std::endl;
void test1()
{
	vector<int> numbers;
	std::istream_iterator<int> isi(cin);//等待输入

	cout<<">已经输入第一个元素:"<<endl;
	//copy(isi,std::istream_iterator<int>(),numbers.begin());
	copy(isi,std::istream_iterator<int>(),std::back_inserter(numbers));
	
	std::ostream_iterator<int> osi(cout,"-");
	copy(numbers.begin(),numbers.end(),osi);
	cout<<endl;
}
int main(void)
{
	test1();
	return 0;
}
