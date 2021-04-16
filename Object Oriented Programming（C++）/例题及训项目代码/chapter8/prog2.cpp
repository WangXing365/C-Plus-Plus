//项目2：计算函数的定积分
#include "iostream.h"
float function(float x) 				//欲积分的函数
{
	return 4.0f/(1+x*x);
}
class inteAlgo						//基类inteAlgo
{
protected:
	float a,b;						//积分区间的左右边界
	int n;							//把[a,b]区间划分为n份
	float h, sum;						//步长h，积分结果值sum
public:
	inteAlgo(float left,float right,int steps)
	{
		a = left;
		b = right;
		n = steps;
		h = (b-a)/n;					//计算出步长h
		sum=0.0f;
	}
	virtual void integrate(void); 		//虚函数integrate
};
class rectangle: public inteAlgo  		//派生类rectangle
{
public:
	rectangle(float left,float right,int steps):inteAlgo(left,right,steps)
	{}
	virtual void integrate(void); 		//虚函数integrate
};
class ladder: public inteAlgo  			//派生类ladder
{
public:
	ladder(float left,float right,int steps):inteAlgo(left,right,steps)
	{   }
	virtual void integrate(void); 		//虚函数integrate
};
class simpson: public inteAlgo  			//派生类simpson
{
public:
	simpson(float left,float right,int steps):inteAlgo(left,right,steps)
	{}
	virtual void integrate(void); 		//虚函数integrate
};
void inteAlgo::integrate(void)			//基类虚函数定义
{	cout<<sum<<endl; }
//rectangle类的实现
void rectangle::integrate(void)		//按矩形法计算定积分
{
	float a1 = a;
	for(int i=0;i<n;i++)
	{	sum += function(a1);       //sum=(f(a)+f(a+h)+...+f(a+(n-1)h)h
		a1 += h;
	}
	sum *= h;
	cout<<sum<<endl;				//显示积分结果sum
}
//ladder类的实现
void ladder::integrate(void)		//按矩形法计算定积分
{
	float a1 = a;
	sum = (function(a) + function(b))/2.0f;
	for(int i=1;i<n;i++)
	{
		a1 += h;
		sum += function(a1);      //sum=(f(a)+2f(a+h)+...+2f(a+(n-1)h)+f(b))h/2
	}
	sum *= h;
	cout<<sum<<endl;			  //显示积分结果sum
}
//simpson类的实现
void simpson::integrate(void)	  //按矩形法计算定积分
{
	float a1 = a, s = 1.0f;
	sum = function(a) + function(b);
	for(int i=1;i<n;i++)
	{
		a1 += h;
		sum += (3.0f+s)*function(a1);//sum=(f(a)+4f(a+h)+2f(a+2h)+...+f(b))h/3
		s = -s;
	}
	sum *= h/3.0f;
	cout<<sum<<endl;			   //显示积分结果sum
}
void integrateFun(inteAlgo *p)
{
	p->integrate();
}
void main()
{  
	rectangle rec(0.0,1.0,10);  	//rectangle类对象rec
	ladder lad(0.0,1.0,10);			//ladder类对象lad
	simpson sim(0.0,1.0,10);		//simpson类对象sim
	integrateFun(&rec);			//矩形法计算定积分
	integrateFun(&lad);			//梯形法计算定积分
	integrateFun(&sim);			//simpson 法计算定积分
}
