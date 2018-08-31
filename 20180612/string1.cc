 ///
 /// @file    string1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-12 22:48:02
 ///
#include <string.h> 
#include <stdlib.h>


#include <iostream>
using std::cout;
using std::endl;

void test()
{
	char arr1[]="hello";
	char arr2[]=",world";
	int length=sizeof(arr1)+sizeof(arr2);
	char *ptr=(char *)malloc(length);
	memset(ptr,0,length);
	strcpy(ptr,arr1);
	strcat(ptr,arr2);
	cout<<"sizeof(arr1)="<<sizeof(arr1)<<endl;
	cout<<"sizeof(arr2)="<<sizeof(arr2)<<endl;
	cout<<"ptr="<<ptr<<endl;
	
	char *p1=strstr(ptr,"world");
	char *psubstr=(char *)malloc(6);
	strncpy(psubstr,p1,5);
	cout<<"psubstr="<<psubstr<<endl;
	free (psubstr);
	
	free(ptr);
}
int main(void)
{
	test();
	return 0;
}
