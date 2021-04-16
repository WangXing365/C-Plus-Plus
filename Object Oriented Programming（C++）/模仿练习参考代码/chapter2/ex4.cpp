//输入一个字符，判断它是不是大写字母，如果是，则将其转换为小写字母，否则不转换。
 #include "iostream.h"
 void main()
 {	
	 char a,b;
	 cout<<"请输入个字符 ：";
	 cin>>a; 
     b  =  (a>='a' && a<='z')  ?  a-32  :  a;     
     cout<<a<<"-->"<<b<<endl;
  }
