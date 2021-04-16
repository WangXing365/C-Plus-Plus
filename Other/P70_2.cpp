/*
 *面向对象程序设计（c++） P70模仿练习 第二题
 *从键盘输入10个整数存放在数组中，将数组中的前后元素位置互换，实现反序存储，然后逐个输出每个元素，观察结果。
 */
#include<iostream>
using namespace std;
int main(){
	int a[10];
	cout<<"   ---请输入10个整数---"<<endl;
	for(int i=0;i<10;i++){
		cout<<"请输入第"<<i+1<<"个整数：";
		cin>>a[i]; 
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9-i;j++){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	cout<<"---现在进行反序输出---"<<endl;
	for(int i=0;i<10;i++){
		cout<<"第"<<i+1<<"个整数:"<<a[i]<<endl;
	}
}
