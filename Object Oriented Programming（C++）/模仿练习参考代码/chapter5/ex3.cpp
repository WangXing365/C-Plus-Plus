/*
1. 设计一个计算平均成绩的函数。输入N个学生的成绩，调用函数并输出计算结果。
2. 使用字符数组名作为函数的形参，编写字符串复制函数。
*/
 #include "iostream.h"
 float fnAve(int *arry,int n);
 void MyCopy(char *object,char *source);
 void main()
 {
     int a[]={13,56,66,90,65,78};
	 char b[80];
     float fAve;
	 fAve = fnAve(a,6);
	 cout<<"平均成绩="<<fAve<<endl;
	 MyCopy(b,"how are you");
	 cout<<b<<endl;
 }
//计算平均成绩的函数	
float fnAve(int *arry,int n)
{
	int i,*p,sum;
	p = arry;
	sum = *p;
	for(i=1,p++;i<n;i++,p++)
		sum += *p;
	return ((float)sum/n);
}

//字符串复制函数
void MyCopy(char *object,char *source)
{
	char *s = source,*p=object;
	while(*s)
	{
		*p = *s;
		p++;
		s++;
	}
	*p = '\0';
}