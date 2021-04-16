//【例3.13】 对于等式xyz+yzz = 532，编程求x、y、z的值（其中xyz和yzz表示两个3位数）。
#include "iostream.h"
void  main()
 {
		int x,y,z, data;
		for(x=1;x<10;x++)
		for(y=1;y<10;y++)
			for(z=0;z<10;z++)
			{
				data = 100*x+10*y+z+ 100*y+10*z+z;
				if( data == 532)
					cout<<"x = "<<x<<",y = "<<y<<",z = "<<z<<endl;
			}
 }
