//【例4.5】 使用二维数组保存数据。
#include <iostream.h>
 void main()
 {  
    int i,j;
    int a[3][4]={ {12,76,4,-1}, {-9,28,55,-6}, {21,10,13,-2} }; 
    for(i=0;i<3;i++) 				//遍历所有的元素
    { 
		for(j=0;j<4;j++)
          	cout<<a[i][j]<<"\t";
      	cout<<"\n";
   }
}