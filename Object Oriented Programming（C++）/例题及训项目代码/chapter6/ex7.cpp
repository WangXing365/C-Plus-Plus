//【例6.7】设计一个含4个整数的类，要求能够求出这4个数的最大值。
class  MyMax4 
{
private:
	int  a,b,c,d;
	int  Max2(int , int);
public:
    void  Set(int,int,int,int );//该成员函数可以访问类的私有成员a,b,c,d
	int  Max4();                //该成员函数可以访问私有成员Max2（int,int）
};
//类中成员函数的实现：
int MyMax4::Max2(int x,int y)   //求2个数的最大值
{
	if(x>y)return x;
	else   return y;
}
void MyMax4::Set(int x1,int x2,int x3,int x4) 
{
	a=x1;b=x2;c=x3;d=x4;
}
int MyMax4::Max4() 			 //求自己类中4个数的最大值
{
	int x,y,z;
	x=Max2(a,b);   			 //私有段的成员可被本类的成员函数所访问
	y=Max2(c,d);
	z=Max2(x,y);
	return  z;
}

