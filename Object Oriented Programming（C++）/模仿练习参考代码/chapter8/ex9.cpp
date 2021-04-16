/*
完善MyString类，添加拷贝构造函数、析构函数、获取字符串长度、判断参数字符串是否为子串等成员。
并对其进行测试。
*/
#include <iostream.h>
#include <string.h>
class MyString
{
protected:
	int iLength;
	char *str;
public:
	MyString(){str =NULL;iLength=0;}//缺省构造函数
	MyString(const char *s);		//构造函数，以字符指针为参数
	void Show(){ if(str)cout<<str<<'\n';}//输出字符串
	MyString & operator =(MyString &);//重载赋值运算符
	friend MyString operator+(const MyString &,const MyString &);//友元实现+重载
	friend MyString operator-(const MyString &,const char *);    //友元实现-重载
	int operator < (const MyString &)const;
	int operator > (const MyString &)const;
	int operator ==(const MyString &)const;
};
MyString::MyString(const char *s)		//构造函数，以字符指针为参数
{
	if(s)
	{	iLength = strlen(s);
		str = new char[iLength+1];
		strcpy(str,s);
	}
	else {str = NULL;iLength=0;}
}
MyString & MyString::operator =(MyString &s)//实现赋值运算符重载
{
	if(this == &s)return *this;             //处理字符串自身赋值
	if(str)delete[]str;                     //释放对象自身的空间
	iLength = s.iLength;
	if(s.str)
	{	str = new char[iLength+1];
		strcpy(str,s.str);
	}
	else str = NULL;
	return *this;
}
MyString operator+(const MyString &s1,const MyString &s2)//连接两个字符串
{	MyString  t;
	t.iLength = s1.iLength+s2.iLength;
	t.str = new char[t.iLength+1];
	strcpy(t.str,s1.str);
	strcat(t.str,s2.str);
	return t;
}
MyString operator-(const MyString &s1,const char *s2)//删除s1中第一次出现的s2
{
	MyString  t;
	char *p1 = s1.str,*p2;
	int i=0,len=strlen(s2);
	if(p2 = strstr(s1.str,s2))//如果是子串
	{	t.iLength = s1.iLength-len;
		t.str = new char[t.iLength+1];
		while(p1<p2)t.str[i++]=*p1++;
		p1 += len;
		while(t.str[i++]=*p1++);
		return t;
	}else return s1;
}
int MyString::operator < (const MyString &s)const //重载小于运算符，成员函数实现
{	return (strcmp(str,s.str)<0); }
int MyString::operator > (const MyString &s)const //重载大于运算符，成员函数实现
{	return (strcmp(str,s.str)>0); }
int MyString::operator == (const MyString &s)const //重载恒等于运算符，成员函数实现
{	return (strcmp(str,s.str)==0); }
void main()
{
	MyString s1("C++程序设计"),s2,s3("ABC学生学习"),s;
	cout<<"测试赋值运算符=:\n";
	s1.Show();
	s2 = s1;
	s2.Show();
	cout<<"测试字符串连接运算符+:\n";
	s = s1+s3;
	s.Show();
	cout<<"测试字符串相减运算符-:\n";
	s = s - "C++";
	s.Show();
	cout<<"测试字符串相大小比较运算符:\n";
    if(s1<s3)cout<<"s1<s3"<<endl;
	else     cout<<"s1>= s3"<<endl;
}
