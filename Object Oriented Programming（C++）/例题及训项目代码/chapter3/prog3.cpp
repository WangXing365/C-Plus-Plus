//项目3：数学家维纳(N.Wiener)年龄问题
#include "iostream.h"
#include "stdio.h"
void main()
{   int k[10];
    int x,a,b,c,d,e,f,g,h,i,j,sum,l;
	int x3,x4;
	for(x = 12; x<30 ;x++)
	{	x3 = x*x*x; 
		x4=x3*x;
		for(a=1;a<10;a++)
		for(b=0;b<10;b++)
		for(c=0;c<10;c++)
		for(d=0;d<10;d++)
		for(e=1;e<10;e++)
		for(f=0;f<10;f++)
		for(g=0;g<10;g++)
		for(h=0;h<10;h++)	
		for(i=0;i<10;i++)
		for(j=0;j<10;j++)
		{
			if((x4 == e*100000+f*10000+g*1000+h*100+i*10+j)
				&&(x3 == a*1000+b*100+c*10+d))
			{   sum=0;
				for(l=0;l<10;l++)k[l]=0;
				k[a]=1;k[b]=1;k[c]=1;k[d]=1;
				k[e]=1;k[f]=1;k[g]=1;k[h]=1;k[i]=1;k[j]=1;
				for(l=0;l<10;l++)sum+=k[l];
				if(sum==10)
				printf("\n [%d=%d%d%d%d%d%d%d%d%d%d]",
								x,a,b,c,d,e,f,g,h,i,j);
			}
		}
	}
}
