//【例2.8】关系表达式。
#include <iostream.h>
void main()
{   
	int z;
	z = 3+5 == 2*4;     //即判断（3＋5）是否等于（2*4），z=1表示true
	cout<<"\n z= "<<z; 
	z = 2+3 != 5>5-3;  //等价于(2+3)!=(5>(5-3))，z=1表示true
    cout<<"\n z= "<<z; 
	z = 5>4 >= 3;     //先求5>4结果为1,再进行1 >= 3的比较,z=0表示false
	cout<<"\n z= "<<z;
}


