//¡¾Àý4.24¡¿ ½«×Ö·û´®str_a¸´ÖÆµ½×Ö·û´®str_bÖÐ¡£
#include "iostream.h"
void main()
{	
	char  str_a[] = "This is a string!";
	char  str_b[60],*pa,*pb;
	pa = str_a;
	pb = str_b;
	for(  ; *pa != '\0';pa++,pb++)
		*pb = *pa;
	*pb = '\0';
	cout<<"×Ö·û´®str_aÊÇ: "<<str_a<<endl;
	cout<<"×Ö·û´®str_bÊÇ: "<<str_b<<endl;
}



