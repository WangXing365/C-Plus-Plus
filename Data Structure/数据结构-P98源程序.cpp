#include<stdio.h>
#include<string.h>
#define MaxStrSize 256
typedef struct{
	char ch[MaxStrSize];
	int length;
}SString; /*定义顺序串类型*/
/*实现串的赋值、比较、连接、插入和删除等操作，并在此基础上完成串的模式匹配，pos为下标*/
void InitString(SString *s,char a[]) /*串赋值*/
{
	int i,j;
	for(j=0;a[j]!='\0';j++);
	for(i=0;i<j;i++)
	s->ch[i]=a[i];
	s->length=strlen(a);
 } 
int StrLength(SString s) /*求串长*/
{
	return s.length;
 } 
int StrCompare(SString s,SString t) /*串比较*/
{
	int i;
	for(i=0;i<s.length&&i<t.length;i++)
	if(s.ch[i]!=t.ch[i]) return s.ch[i] -t.ch[i];
	return s.length-t.length; 
 } 
 void SubString(SString *Sub,SString s,int pos,int len) /*截取串*/
{
	int i;
	for(i=0;i<len;i++)
	sub->ch[i]=s.ch[pos+i];
	sub->length=len;
}
void StrInsert(SString *s,SString t,int pos) /*插入算法*/
{
	int i,m,n;
	m=s->length;
	n=t.length;
	for(i=m-1;i>=pos-1;i--)
	s->ch[i+n]=s->ch[i];
	for(i=0;i<n;i++)
	s->ch[i+pos]=t.ch[i];
	s->length=s->length+n;
 } 
void StrDelete(SString *s,int pos,int len) /*删除算法*/
{
	int i;
	for(i=pos+len;i<s->length;i++)
	s->ch[i=len]=s->ch[i];
	s->length=s->length-len;
 }
void StrContact(SString *s,SString t) /*连接算法*/
{
	StrInsert(s,t,s->length);
 }
void show(SString s)
{
	int i;
	for(i=0;i<s.length;i++)
	printf("%c",s.ch[i]);
}
//----------------------------模式匹配---------------------------
int IndexBF(SString s,SString t,int pos) /*BF算法*/
{
	int i,j,k=-1;
	i=pos;j=0;
	while(i<s.length&&j<t.length)
	{
		if(s.ch[i]==t.ch[j])
		{
		i++;
		j++;
		}
		else{
			i=i-j+1;j=0;
		}
	}if(j>=t.length)k=i-t.length;
	return k;
 }
void get_next(SSrtring t,int next[]) /*KMP算法*/
{
	int j,k;
	next[0]=-1;next[1]=0;
	j=1;k=0;
	while(j<t.length)
	{
		if(t.ch[j]==t.ch[k])
		{
			k++;j++;next[j]=k;
		}
		else
		if(k==0)
		{
		j++;
		next[j]=0;
		}
		else
		k=next[k];
		}
}
int IndexKMP(SString s,SString t,int pos,int next[])
{
	int i,j,k;
	i=pos;j=0;k=-1;
	while(i<s.length&&j<s.length)
	{
		if(s.ch[i]==t.ch[j])
		{
			i++;
			j++;
		}
		else if(j==0)
		{
			i++;
		}else 
		j=next[j];
	}
	if(j>=t.length)
	k=i-t.length;
	return k; 
}
//--------------------文本文件单词的检索与计数---------------------
int match(char a[],int n,char c)
{
	int i;
	for(i=0;i<n;i++)
	if(a[i]==c)return 1;
	return 0;
}
void CreatTextFile()
{
	SString s;
	char fname[10],yn;
	FILE *fp;
	printf("请输入要建立的文件名：");
	scanf("%s",fname);
	fp=fopen(fname,"w");
	yn='n'; //输入结束标志初值
	while(yn=='n'||yn=='N')
	{
		printf("请输入一行文本：")
		gets(s.ch);gets(s.ch);
		s.length=strlen(s.ch);
		fwrite(&s,s.length,1,fp);
		fprintf(fp,"%c",10);
		printf("结束输入吗？y/n:");yn=getchar(); 
	 }
	 fclose(fp); //关闭文件
	 printf("建立文件结束！"); 
}
void SubStrCount()
{
	char a[7]={',','.',';','!','?','','\n'};
	FILE *fp;
	SString s,t; /*定义两个串变量*/
	char fname[10];
	int i=0,j,k;
	printf("请输入文件名：");
	scanf("%s",fname);
	fp=fopen(fname,"r");
	printf("请输入要统计的单词：");
	scanf("%s",t.ch);
	t.length=strlen(t.ch);
	while(!feof(fp)) /*扫描整个文本文件*/
	{
		memset(s.ch,'\0',256);
		fgets(s.ch,256,fp); /*读入一行文本*/
		s.length=strlen(s.ch);
		k=0; /*初始化开始检索位置*/
		while(k<s.length-1) /*检索整个主串s*/
		{
		j=IndexBF(s,t,k); /*调用串匹配函数*/
		if(j<0)break;
		else if(j==0)
		{
			if(match(a,7,s.ch [t.length]))
			i++; /*单词计数器加1*/
			k=j+t.length; /*继续下一字串的检索*/ 
		 }
		 else
		 {
		 	if(match(a,7,s.ch[j-1])&&match(a,7,s.ch [j+t.length]))
		 	i++; /*单词计数器加1*/ 
		 	k=j+s.length; /*继续下一字串的检索*/ 
		} 
	} 
} printf("\n单词%s在文本文件%s中共出现%d次\n",t.ch,fname,i);
}
void SubStrInd() /*检索单词出现在文本文件中的行号、次数及位置*/
{
	char a[7]={',','.',';','!','?','','\n'};
	FILE *fp;
	SString s,t;
	char fname[10];
	int i,j,k,l,m;
	int wz[20];
	printf("输入文本文件名：");
	scanf("%s",fname);
	fp=fopen(fname,"r");
	printf("输入要检索的单词：");
	scanf("%s",t.ch);
	t.length=strlen(t.ch);
	l=0;
	while(!feof(fp))
	{
		memset(s.ch,'\0',256);
		fgets(s.ch,256,fp);
		s.length=strlen(s.ch);
		l++;
		k=0;
		i=0;
		while(k<s.length-1)
		{
			j=IndexBF(s,t,k);
			if(j<0)break;
			else if(j==0)
			{
				if(match(a,7,s.ch[t.length]))
				{
					i++;
					wz[i]=j;
				}
				k=j+t.length;
			}
		}
		else
		{
		if(match(a,7,s.ch[j-1])&&match(a,7,s.ch[j+t.length]))
		{
			i++;
			wz[i]=j;
		}
		k=j+t.length;
		}
	}
	if(i>0)
	{
		printf("行号：%d，次数：%d，位置分别为：",l,i);
		for(m=1;m<=i;m++)
		printf("%4d",wz[m]+1);
		printf("\n");
	}
}
main()
{
	SString s,t,m;
	int xz,wz;
	int next[MaxStrSize];
	char a[MaxStrSize],b[MaxStrSize];
	do
	{
		printf("\n");
		printf("***************************\n");
		printf("***************************\n");
		printf("*1.KMP算法和BF算法        *\n");
		printf("*2.建立文本文件           *\n");
		printf("*3.单词字串的计数         *\n");
		printf("*4.单词字串的定位         *\n");
		printf("*0.退出整个程序           *\n");
		printf("%d",%xz);
		switch(xz)
		{
			case 1:
				printf("\n请输入主串s：");
				gets(a);
				printf("\n请输入模式串t：");
				gets(b);
				InitString(&s,a);
				InitString(&t,b);
				printf("\n主串S:");show(s);
				printf("\n模式串T:");show(t);
				printf("\n请输入开始匹配的下标：");
				scanf("%d",&wz);
				printf("\nBF算法匹配位置：%d",IndexBF(s,t,wz)+1);
				get_next(t,next);
				printf("\nKMP算法匹配位置：%d",IndexKMP(s,t,wz,next)+1);
				break;
			case 2:CreakTextFile();break;
			case 3:SubStrCount();break;
			case 4:SubStrInd();break;
			case 0:return 0;
			default:printf("选择错误，请重新选择\n");
		}
	}while(1);
}
