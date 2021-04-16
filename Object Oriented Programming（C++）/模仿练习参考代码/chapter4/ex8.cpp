/*2. 统计字符串中有多少个单词。输入一行字符，然后统计其中有多少个单词，
     要求每个单词之间用空格分隔开，最后的字符不能为空格。
*/

#include <iostream.h>
void main()
{  
	int  i,count=0;
	char chStr[80];
	cout<<"请输入一个字符串: ";
	cin.getline(chStr,79,'\n');
	for( i=0;chStr[i] != '\0'; i++)     //用串结束标识'\0'控制循环终止
	{   
		if(chStr[i]==' '&& chStr[i-1]!=' ')count++;
	
	}
	cout<<"字符串:"<<chStr<<"中含"<<count<<"个单词。\n";
}