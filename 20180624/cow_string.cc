 ///
 /// @file    cow_string.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-24 16:24:38
 ///
 //写时复制技术的实现
#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

class String
{
public:
	String();

	String(const char * pstr);

	String(const String &rhs);

	String &operator=(const String &rhs);

	~String();
private:
	char * _ptr;
};
