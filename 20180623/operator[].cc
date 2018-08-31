 ///
 /// @file    operator[].cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-23 09:08:45
 ///
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;
class CharArray
{
public:
	CharArray(int size)
	:_size(size)
	 ,_parr(new char[size+1]())
	{
		cout<<"CharArray"<<endl;
	}
	~CharArray()
	{
		cout<<"~CharArray"<<endl;
		delete []_parr;
	}
	char& operator[](int idx)
	{
		static char nullchar='\0';
		if(idx>=0&&idx<_size)
		{
			return _parr[idx];
		}
		return nullchar;
	}

private:
	int _size;
	char * _parr;
};
int main(void)
{
	const char *pstr="hello,world";
	CharArray carr(strlen(pstr)+1);
	for(int idx=0;idx<strlen(pstr);++idx)
	{
		carr[idx]=pstr[idx];
	}
	for(int idx=0;idx<strlen(pstr);++idx)
	{
		cout<<carr[idx];
	}
	cout<<endl;
	return 0;
}
