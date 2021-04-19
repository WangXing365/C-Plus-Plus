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
