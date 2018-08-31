 ///
 /// @file    vector.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-16 20:48:15
 ///
 
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void printVectorCapacity(vector<int> &vec)
{
	cout<<"vec's size="<<vec.size()<<endl;
	cout<<"vec's capacity="<<vec.capacity()<<endl;
}

int main(void)
{
	vector<int>numbers;
	numbers.reserve(10);
	printVectorCapacity(numbers);
	numbers.push_back(1);
	printVectorCapacity(numbers);
	numbers.push_back(2);
	printVectorCapacity(numbers);
	numbers.push_back(3);
	printVectorCapacity(numbers);
	numbers.push_back(4);
	printVectorCapacity(numbers);
	numbers.push_back(5);
	printVectorCapacity(numbers);
	numbers.push_back(6);
	printVectorCapacity(numbers);
	for(int idx=0;idx<numbers.size();idx++)
	{
		cout<<numbers[idx]<<" ";
	}
	cout<<endl;
	return 0;
}
