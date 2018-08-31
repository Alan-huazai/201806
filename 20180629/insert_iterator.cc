 ///
 /// @file    insert_iterator.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-29 07:52:58
 ///
 
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
using std::cout;
using std::endl;
using std::front_insert_iterator;
using std::back_insert_iterator;
using std::insert_iterator;
using std::vector;
using std::list;
using std::copy;

template <typename Container>
void displayContainer(const Container &c)
{
	typename Container::const_iterator cit;
	for(cit=c.begin();cit!=c.end();++cit)
	{
		cout<<*cit<<" ";
	}
	cout<<endl;
}
void test1()
{
	vector<int> numbers{1,2,3};
	list<int> listInt;
	
	copy(numbers.begin(),numbers.end(),
			front_insert_iterator<list<int> >(listInt));
	displayContainer(listInt);

	copy(numbers.begin(),numbers.end(),
			back_insert_iterator<list<int> >(listInt));
	displayContainer(listInt);
	
	copy(numbers.begin(),numbers.end(),
			insert_iterator<list<int> >(listInt,++listInt.begin()));
	displayContainer(listInt);


}

int main(void)
{
	test1();
	return 0;
}
