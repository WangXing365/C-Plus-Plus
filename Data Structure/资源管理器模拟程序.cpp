#include"stdio.h"
#include"string.h"
typedef struct TREENOOE{
	char wjm[20];
	struct TREENOOE *firstchild,*brother;
} TreeNode,* PTreeNode;
//-------------队列-------------
typedef struct a
{
	PTreeNode ptr;
	struct a *next;
} Quenode,* PQuenode;
typedef struct b
{
	PQuenode front;
	PQuenode rear;
} QUEUE;
int CreatQueue(QUEUE *Q)
{
	Q->front=Q->rear=new Quenode;
	if(Q->front==NULL)
	return 0;
	Q->front->next=Q->rear->next=NULL;
	return 1;
}
int EnQueue(QUEUE *Q,PTreeNode pt)
{
	PQuenode p=new Quenode;
	p->ptr=pt;
	p->next=NULL;
	Q->rear->next=p;
	Q->rear=p;
	return 1;
}
int DeQueue(QUEUE *Q,PTreeNode pt)
{
	PQuenode p;
	p=Q->front->next;
	Q->front->next=p->next;
	*pt=p->ptr;
	if(Q->front->next==NULL)
	Q->front=Q->rear;
	delete(p);
	return 1;
}
int TopQueue(QUEUE *Q,PTreeNode *pt)
{
	if(Q->front==Q->rear)
	return 0;
	*pt=Q->front->next->ptr;
	return 1;
}
//-------------栈-------------
typedef struct c
{
	PTreeNode ptr;
	struct c *next;
} Stack,*PStack;
int CreatStack(PStack *Q)
{
	*Q=NULL;
	return 1;
}
int push(PStack *Q,PTreeNode pt)
{
	PStack p=new Stack;
	p->ptr=pt;
	p->next=NULL;
	p->next=*Q;
	*Q=p;
	return 1;
}
int pop(PStack *Q)
{
	PStack p;
	if(*Q==NULL)
	return 0;
	else 
	p=*Q;
	*Q=p->next;
	delete(p);
	return 1;
}
void TravelStack(PStack Q)
{
	if(Q->next!=NULL)
	TravelStack(Q->next);
	printf("%s",Q->ptr->wjm);
}
//-------------按边建树-------------
/*
 # a a b a c a d c e c f e #
*/
void CreatTree1(PTreeNode *T)
{
	QUEUE Q;
	PTreeNode t,t1,r;
	char parent[20];
	char child[20];
	CreatQueue(&Q);
	for(scanf("%s%s",parent,child);strcmp(child,"#")!=0;scanf("%s%s",parent,child))
	{
		t=new TreeNode;
		strcpy(t->wjm,child);
		t->brother=t->firstchild=NULL;
		EnQueue(&Q,t);
		if(strcmp(parent,"#")==0)
		*T=t;
		else
		{
			t1=new TreeNode;
			TopQueue(&Q,&t1);
			while(strcmp(t1->wjm,parent)!=0)
			{
				DeQueue(&Q,&t1);
				TopQueue(&Q,&t1);
			}
			if(t1->firstchild==NULL)
			{
				t1->firstchild=t;
				r=t;
			}
			else
			{
				r->brother=t;
				r=t;
			}
		}
	}
}
//-------------按对应二叉树建树-------------
void CreatTree2(PTreeNode *T)
{
	char szname[20];
	PTreeNode t;
	scanf("%s",szname);
	t=new TreeNode;
	strcpy(t->wjm,szname);
	t->firstchild=t->brother=NULL;
	if(strcmp(szname,"#")==0)
	*T=NULL;
	else
	{
		*T=t;
		CreatTree2(&(*T)->firstchild);
		CreatTree2(&(*T)->brother);
	}
}
// a b # c d # # e # # #
//-------------缩进显示二叉树-------------
void display(PTreeNode T,int indent)
{
	if(T)
	{
		int i;
		for(i=0;i<indent;i++)
		printf(" ");
		if(indent)
		printf("|---");
		printf("%s\n",T->wjm);
		display(T->firstchild,indent+1);
		display(T->brother,indent);
	}
}
//-------------显示结点路径-------------
void path(PTreeNode T,char name[20],PATACK *S)
{
	PTreeNode p;
	p=new TreeNode;
	strcpy(p->wjm,name);
	p->firstchild=p->brother=NULL;
	while(T)
	{
		Push(S,T);
		if(strcmp(T->wjm,name)==0)
		Travel(*S);
		else
		path(T->firstchild,name,S);
		Pop(S);
		T=T->brother
	}
}
//-------------在指定目录下插入-------------
int find(PTreeNode T,char name[],PTreeNode *par)
{
	if(T)
	{
		if(strcmp(T->wjm,name)==0)
		{
			(*par)=T;
			return 1; 
		}
		else if(find(T->firstchild,name,par))
		return 1;
		else if(find(T->brother,name,par))
		return 1;
	}
	return 0;
}
void insert(PTreeNode T)
{
	char parent[20];
	char child[20];
	PTreeNode pthis,newnode;
	printf("input parent and child：\n");
	scanf("%s%s",parent,child);
	if(find(T,parent,&pthis))
	{
		newnode=new TreeNode;
		strcpy(newnode->wjm,child);
		newnode->firstchild=NULL;
		newnode->brother=pthis->firstchild;
		pthis->firstchild=newnode;
	}
	else printf("no parent data.\n");
}
//------------删除指定结点-------------
int findparent(PTreeNode T,char name[20],PTreeNode *parent,PTreeNode *pre,PTreeNode *pthis)
{
	if(T)
	{
		if(strcmp(T->wjm,name)==0)
		{
			*pre=*parent;
			*pthis=T;
			return 1;
		}
		else if(findparent(T->firstchild,name,&T,pre,pthis))
		return 1;
		else if(findparent(T->brother,name,&T,pre,pthis))
		return 1;
	}
	else return 0;
}
void destroy(PTreeNode T)
{
	if(T==NULL)
	return;
	if(T->firstchild)
	destroy(T->firstchild);
	if(T->brother)
	destroy(T->brother);
	delete(T);
}
void delet(PTreeNode T)
{
	char node[20];
	PTreeNode parent,pthis,pre;
	parent=pthis=pre=NULL;
	printf("input node to delete：\n");
	scanf("%s",node);
	if(findparent(T,node,&parent,&pre,&pthis))
	{
		if(pre==NULL)
		destroy(T);
		if(pre->firstchild==pthis)
		{
			pre->firstchild=pthis->brother;
			delete(pthis);
		}
		else
		{
			pre->brother=pthis->brother;
			delete(pthis);
		}
	}else printf("no data. \n");
}
void node(PTreeNode T)
{
	while(T)
	{
		if(T->firstchild==NULL)
		printf("%s",T->wjm);
		else
		{
			yesijiedian(T->firstchild);
		}
		T=T->brother;
	}
}
void main()
{
	PTreeNode T;
	PStack S;
	CreatStack(&S);
	int choice;
	char name[20];
	while(1)
	{
		printf("1---按边创建树\n");
		printf("2---按先序遍历字符串创建二叉树\n");
		printf("3---显示目录树\n");
		printf("4---显示指定文件所在的全路径\n");
		printf("5---插入\n");
		printf("6---删除\n");
		printf("7---销毁\n");
		printf("0---退出\n");
		printf("请输入选项：\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("按边输入树：\n");
				CreatTree1(&T);
				break;
			case 2:
			    printf("按对应二叉树输入树：\n");
				CreatTree2(&T);
				break;
			case 3:
			    display(T,0);
				break;
			case 4:
			    printf("input name：\n");
				scanf("%s",name);
				path(T,name,S);
				break;
			case 5:
				insert(T);
				break;
			case 6:
				delet(T);
				break;
			case 7:
				destroy(T);
				break;
			case 8:
				node(T);
				break;
			case 0:
				break;
		}
	}
}
