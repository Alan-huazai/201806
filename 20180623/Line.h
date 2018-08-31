 ///
 /// @file    Line.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-23 14:10:42
 ///
 //惯用设计模式：PIMPL
 //1、接口与实现分离，
 #ifndef __WD_LINE_H__
#define __WD_LINE_H__
class Line
{
public:
	Line(int,int,int,int);
	~Line();
	void printLine()const;
private:
	class LineImpl;//前向声明
	LineImpl * _pImpl;
};

#endif
