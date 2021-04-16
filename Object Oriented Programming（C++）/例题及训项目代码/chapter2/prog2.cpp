//项目2：逻辑推理与判断
#include <iostream.h>
void main()
{
	int a,b,c,d;
	b = 1;						/*盗贼者是乙*/
	a = c = d = 0;					/*盗贼者不是甲、丙、丁*/
	if(b+d==1 && b+c==1 && a+b==1 && a+b+c+d==1)
		cout<<"小明的判断正确，盗窃者是乙\n";
	else	cout<<"小明的判断错误，盗窃者不是乙\n";
}
