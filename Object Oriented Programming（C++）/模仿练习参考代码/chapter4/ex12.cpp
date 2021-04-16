/*
1. 通过指针交换两个指针所指向的变量的值。
2. 输出变量的地址和指针的值，了解指针变量的意义。
3. 将键盘输入的两个整数分别存入变量x、y中,再由小到大顺序输出。
*/
#include <iostream.h>
void  main()
{	
	int  x=2,y=3,t;                  	 //定义简单变量x,y,t
 	int  *px,*py;                //定义指针变量px,py
    px = &x;
	py = &y;
	// 1. 通过指针交换两个指针所指向的变量的值。
    t = *px;
	*px=*py;
	*py=t;
	cout<<"x="<<x<<",y="<<y<<endl;  
	//2. 输出变量的地址和指针的值，了解指针变量的意义。
	cout<<"x="<<x<<",px="<<px<<endl; 
	cout<<"y="<<y<<",py="<<py<<endl;  
	//3. 将键盘输入的两个整数分别存入变量x、y中,再由小到大顺序输出。
	cout<<"请输入x,y:";
    cin>>x>>y;
	if(*px>*py)
		 cout<<*py<<","<<*px;
	else cout<<*px<<","<<*py;
	cout<<"\n";
}
