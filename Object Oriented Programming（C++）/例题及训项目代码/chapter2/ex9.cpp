//【例2.9】 逻辑表达式。
#include <iostream.h>
void main()
{
	int  x = 2, y = 5, z;
	z = (x>0)||(y<8);
	cout<<"\n z= "<<z; //z=1表示true
	z = (x==0)&&(y<8); 
	cout<<"\n z= "<<z; //z=0表示false
	z = !(x==2);  
	cout<<"\n z= "<<z; //z=0表示false
}

