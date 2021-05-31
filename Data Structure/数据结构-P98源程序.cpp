#include<stdio.h>
#include<string.h>
#define MaxStrSize 256
typedef struct{
	char ch[MaxStrSize];
	int length;
}SString; /*����˳������*/
/*ʵ�ִ��ĸ�ֵ���Ƚϡ����ӡ������ɾ���Ȳ��������ڴ˻�������ɴ���ģʽƥ�䣬posΪ�±�*/
void InitString(SString *s,char a[]) /*����ֵ*/
{
	int i,j;
	for(j=0;a[j]!='\0';j++);
	for(i=0;i<j;i++)
	s->ch[i]=a[i];
	s->length=strlen(a);
 } 
int StrLength(SString s) /*�󴮳�*/
{
	return s.length;
 } 
int StrCompare(SString s,SString t) /*���Ƚ�*/
{
	int i;
	for(i=0;i<s.length&&i<t.length;i++)
	if(s.ch[i]!=t.ch[i]) return s.ch[i] -t.ch[i];
	return s.length-t.length; 
 } 
 void SubString(SString *Sub,SString s,int pos,int len) /*��ȡ��*/
{
	int i;
	for(i=0;i<len;i++)
	sub->ch[i]=s.ch[pos+i];
	sub->length=len;
}
void StrInsert(SString *s,SString t,int pos) /*�����㷨*/
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
void StrDelete(SString *s,int pos,int len) /*ɾ���㷨*/
{
	int i;
	for(i=pos+len;i<s->length;i++)
	s->ch[i=len]=s->ch[i];
	s->length=s->length-len;
 }
void StrContact(SString *s,SString t) /*�����㷨*/
{
	StrInsert(s,t,s->length);
 }
void show(SString s)
{
	int i;
	for(i=0;i<s.length;i++)
	printf("%c",s.ch[i]);
}
//----------------------------ģʽƥ��---------------------------
int IndexBF(SString s,SString t,int pos) /*BF�㷨*/
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
void get_next(SSrtring t,int next[]) /*KMP�㷨*/
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
//--------------------�ı��ļ����ʵļ��������---------------------
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
	printf("������Ҫ�������ļ�����");
	scanf("%s",fname);
	fp=fopen(fname,"w");
	yn='n'; //���������־��ֵ
	while(yn=='n'||yn=='N')
	{
		printf("������һ���ı���")
		gets(s.ch);gets(s.ch);
		s.length=strlen(s.ch);
		fwrite(&s,s.length,1,fp);
		fprintf(fp,"%c",10);
		printf("����������y/n:");yn=getchar(); 
	 }
	 fclose(fp); //�ر��ļ�
	 printf("�����ļ�������"); 
}
void SubStrCount()
{
	char a[7]={',','.',';','!','?','','\n'};
	FILE *fp;
	SString s,t; /*��������������*/
	char fname[10];
	int i=0,j,k;
	printf("�������ļ�����");
	scanf("%s",fname);
	fp=fopen(fname,"r");
	printf("������Ҫͳ�Ƶĵ��ʣ�");
	scanf("%s",t.ch);
	t.length=strlen(t.ch);
	while(!feof(fp)) /*ɨ�������ı��ļ�*/
	{
		memset(s.ch,'\0',256);
		fgets(s.ch,256,fp); /*����һ���ı�*/
		s.length=strlen(s.ch);
		k=0; /*��ʼ����ʼ����λ��*/
		while(k<s.length-1) /*������������s*/
		{
		j=IndexBF(s,t,k); /*���ô�ƥ�亯��*/
		if(j<0)break;
		else if(j==0)
		{
			if(match(a,7,s.ch [t.length]))
			i++; /*���ʼ�������1*/
			k=j+t.length; /*������һ�ִ��ļ���*/ 
		 }
		 else
		 {
		 	if(match(a,7,s.ch[j-1])&&match(a,7,s.ch [j+t.length]))
		 	i++; /*���ʼ�������1*/ 
		 	k=j+s.length; /*������һ�ִ��ļ���*/ 
		} 
	} 
} printf("\n����%s���ı��ļ�%s�й�����%d��\n",t.ch,fname,i);
}
void SubStrInd() /*�������ʳ������ı��ļ��е��кš�������λ��*/
{
	char a[7]={',','.',';','!','?','','\n'};
	FILE *fp;
	SString s,t;
	char fname[10];
	int i,j,k,l,m;
	int wz[20];
	printf("�����ı��ļ�����");
	scanf("%s",fname);
	fp=fopen(fname,"r");
	printf("����Ҫ�����ĵ��ʣ�");
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
		printf("�кţ�%d��������%d��λ�÷ֱ�Ϊ��",l,i);
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
		printf("*1.KMP�㷨��BF�㷨        *\n");
		printf("*2.�����ı��ļ�           *\n");
		printf("*3.�����ִ��ļ���         *\n");
		printf("*4.�����ִ��Ķ�λ         *\n");
		printf("*0.�˳���������           *\n");
		printf("%d",%xz);
		switch(xz)
		{
			case 1:
				printf("\n����������s��");
				gets(a);
				printf("\n������ģʽ��t��");
				gets(b);
				InitString(&s,a);
				InitString(&t,b);
				printf("\n����S:");show(s);
				printf("\nģʽ��T:");show(t);
				printf("\n�����뿪ʼƥ����±꣺");
				scanf("%d",&wz);
				printf("\nBF�㷨ƥ��λ�ã�%d",IndexBF(s,t,wz)+1);
				get_next(t,next);
				printf("\nKMP�㷨ƥ��λ�ã�%d",IndexKMP(s,t,wz,next)+1);
				break;
			case 2:CreakTextFile();break;
			case 3:SubStrCount();break;
			case 4:SubStrInd();break;
			case 0:return 0;
			default:printf("ѡ�����������ѡ��\n");
		}
	}while(1);
}
