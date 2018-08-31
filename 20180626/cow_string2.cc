 ///
 /// @file    cow_string.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-26 09:08:55
 ///
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;
class String
{
	class CharProxy
	{
	public:
		CharProxy(String &self,size_t idx)
		:_self(self)
		 ,_idx(idx)
		{}
		CharProxy& operator=(const char &ch);
	operator char()
	{
		return _self._ptr[_idx];
	}
	private:
		String & _self;
		size_t _idx;
	};
friend std::ostream & operator<<(std::ostream &os,const String &rhs);
public:
	String();
	String(const char * ptr);
	String(const String &rhs);
	~String();
	String & operator=(const String &rhs);
	char & operator=(const char &c);
	CharProxy operator[](size_t idx);
	char *c_str();
	int refCount();
	void initRefcount();
	void increaseRefcount();
	void decreaseRefcount();
	void release();
	size_t size();
private:
	char * _ptr;
};

String::String()
{
	_ptr=new char[5]()+4;
	initRefcount();
	cout<<"String()"<<endl;
}

String::String(const char * ptr)
{
	_ptr=new char[strlen(ptr)+5]+4;
	initRefcount();
	strcpy(_ptr,ptr);
}

String::String(const String &rhs)
{
	_ptr=rhs._ptr;
	increaseRefcount();
}

void String::release()
{
	decreaseRefcount();
	if(0==refCount())
	{
		delete [](_ptr-4);
	}
}
String::~String()
{
	release();
	cout<<"~String"<<endl;
}

char * String::c_str()
{
	return _ptr;
}

void String::initRefcount()
{
	*((int *)(_ptr-4))=1;
}

void String::increaseRefcount()
{
	++(*((int *)(_ptr-4)));
}

void String::decreaseRefcount()
{
	--(*((int *)(_ptr-4)));
}

int String::refCount()
{
	return *((int *)(_ptr-4));
}

std::ostream & operator<<(std::ostream &os,const String &rhs)
{
	os<<rhs._ptr;
	return os;
}

String & String::operator=(const String &rhs)
{
	if(this!=&rhs)
	{
		decreaseRefcount();
		if(refCount()==0)
		{
			release();
		}
		_ptr=rhs._ptr;
		increaseRefcount();
	}
	return *this;
}
#if 0
char & String::operator=(const char & c)
{
		cout<<"char & String::operatpr=(char & c)"<<endl;
	//写的时候才进行深拷贝
		if(refCount()>1)
		{
			decreaseRefcount();
			char *ptemp=new char[size()+5]+4;
			strcpy(ptemp,_ptr);
			_ptr=ptemp;
			initRefcount();
		}
		//return c
		char a=c;
		return a;
}
#endif

String::CharProxy String::operator[](size_t idx)
{
	return CharProxy(*this,idx);
}
#if 0
std::ostream & operator<<(std::ostream &os,const String::CharProxy &rhs)
{
	os<<rhs._self._ptr[rhs._idx];
	return os;
}
#endif

String::CharProxy& String::CharProxy::operator=(const char & ch)
{
	if(_idx<_self.size())
	{
		if(_self.refCount()>1)
		{
			_self.decreaseRefcount();
			char *ptmp=new char[_self.size()+5]()+4;
			strcpy(ptmp,_self._ptr);
			_self._ptr=ptmp;
			_self.initRefcount();
		}
		_self._ptr[_idx]=ch;
	}
	return *this;
}



//问题在于执行下标访问运算符无法识别到底是读还是写操作
#if 0
char & String::operator[](size_t idx)
{
	static char nullchar='\0';
	if(idx>=size())
	{
		return nullchar;
	}
	else
	{
		if(refCount()>1)
		{
			decreaseRefcount();
			char *ptemp=new char[size()+5]+4;
			strcpy(ptemp,_ptr);
			_ptr=ptemp;
			initRefcount();
		}
	}
	return _ptr[idx];
}
#endif
#if 0
char & String::operator[](size_t idx)
{
	static char nullchar='\0';
	if(idx>=size())
	{
		return nullchar;
	}
 	return _ptr[idx];
}
#endif
size_t String::size()
{
	return strlen(_ptr);
}

int test1(void)
{
	String s1;
	cout<<"&s1="<<static_cast<const void*>(s1.c_str())<<endl;
	cout<<"s1.refCount="<<s1.refCount()<<endl;
	String s2("hello");
	cout<<"&s2="<<static_cast<const void*>(s2.c_str())<<endl;
	cout<<"s2.refCount="<<s2.refCount()<<endl;
	cout<<"s2="<<s2<<endl;
	return 0;
}


int test2()
{
	String s1("hello");
	cout<<"&s1="<<static_cast<const void*>(s1.c_str())<<endl;
	cout<<"s1.refCount="<<s1.refCount()<<endl;
	String s2=s1;
	cout<<"执行复制构造函数后："<<endl;
	cout<<"&s1="<<static_cast<const void*>(s1.c_str())<<endl;
	cout<<"s1.refCount="<<s1.refCount()<<endl;
	cout<<"&s2="<<static_cast<const void*>(s2.c_str())<<endl;
	cout<<"s2.refCount="<<s2.refCount()<<endl;
	
	cout<<"打印出s2的首字母后："<<s2[0]<<endl;
	cout<<"&s1="<<static_cast<const void*>(s1.c_str())<<endl;
	cout<<"s1.refCount="<<s1.refCount()<<endl;
	cout<<"&s2="<<static_cast<const void*>(s2.c_str())<<endl;
	cout<<"s2.refCount="<<s2.refCount()<<endl;
	
	cout<<"修改s2的首字母后:"<<endl;
	s2[0]='H';
	cout<<"打印出s1的首字母后："<<s1[0]<<endl;
	cout<<"打印出s2的首字母后："<<s2[0]<<endl;
	cout<<"&s1="<<static_cast<const void*>(s1.c_str())<<endl;
	cout<<"s1.refCount="<<s1.refCount()<<endl;
	cout<<"&s2="<<static_cast<const void*>(s2.c_str())<<endl;
	cout<<"s2.refCount="<<s2.refCount()<<endl;
    return 0;
}
int main(void)
{
	test2();
	return 0;
}
