//¡¾Àı3.7¡¿ÓÃdo-whileÓï¾ä£¬¼ÆËã1+2+¡­+100¡£
#include "iostream.h"
void main( )
{
	int Sum,i;
	Sum = 0; i = 1;
	do{
		Sum += i;
		i++;
	}while(i<=100);
	cout<<"Sum is "<< Sum<<endl;
}
