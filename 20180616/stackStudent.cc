 ///
 /// @file    Student.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-16 15:44:49
 ///
#include <string.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;
class Student
{
public:
	Student(const char * name,int id)
	:_name(new char[strlen(name)+1]())
	,_id(id)
	{
		cout<<"我是构造函数"<<endl;
		strcpy(_name,name);
	}
	~Student()
	{
		delete []_name;
		cout<<"我是析构函数"<<endl;
	}
	void print() const
	{
		cout<<"姓名："<<_name<<endl;
		cout<<"学号："<<_id<<endl;
	}
private:
	void * operator new(size_t  sz);  //要申请ze个空间的大小
	void operator delete(void *ret);



private:
	char *_name;
	int _id;
};
int main(void)
{
	//要创建栈对象必须要求构造函数和析构函数必须是public
	Student s1("Mike",100);  //只能创建栈对象
	s1.print();
//	Student *p1=new Student("Jack",101);
//	p1->print();
//	delete p1;
	
	return 0;
}
