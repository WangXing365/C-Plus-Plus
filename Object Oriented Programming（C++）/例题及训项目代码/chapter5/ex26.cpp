#include "iostream.h"
#define  DEBUG
void main(void)
{ 
	char  pass[80]; int i= -1;
	cout<<"\n ÇëÊäÈëÃÜÂë:  ";
	do {
		i++; 
		pass[i] = cin.get();
#ifdef    DEBUG
 		cout.put(pass[i]);
#else
		cout.put('*');
#endif
	}while(pass[i] != '\n');
 	//¡­						//ÆäËüÓï¾ä
}
