//【例6.2】 修改例6.1代码，实现成员函数在类体内定义。

class  Rect
{
private:            		   //私有数据成员：length,width 
	float  length,width;  	   //长和宽
public:                        //公有函数声明：set(),peri(),area()
	void set(float x,float y)//定义成员函数set()
	{
		length= x;
		width = y;
	}	
	float peri()			   //定义成员函数peri()
	{
		return (length+width)*2;
	}
	float area()			  //定义成员函数area()
	{
		return (length*width);
	}
};
