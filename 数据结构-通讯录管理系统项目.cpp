/********************************/
/* 主控菜单处理测试程序 main2.c */
/********************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct //定义通讯录结点类型
{
	char num [5]; //编号
	char name [9]; //姓名
	char sex [3]; //性别
	char phone [13]; //电话
	char addr [3]; //地址
 } DataType;
typedef struct node //定义结点的类型 
 { DataType data; //定义结点的数据域 
  struct node * next; //定义结点的指针域 
  } ListNode;
  typedef ListNode * LinkList;
  LinkList head;
  ListNode *p;
  //函数声明
  int menu_select ();
  LinkList CreateList (void);
  void InsertNode (LinkList head,ListNode *p);
  ListNode *ListFind (LinkList head);
  void DelNode (LinkList head);
  void PrintList (LinkList head);
  //定义主函数
  void main ()
  {
  	for (;;)
  	{
  		switch (menu_select ())
  		{
  			case 1:
  				printf("********************\n");
  				printf("* 通讯录链表的建立 *\n");
  				printf("********************\n");
  				head=CreateList();
  				break;
  			case 2:
  				printf("********************\n");
				printf("* 通讯录结点的插入 *\n");
				printf("********************\n");
				printf("编号（4）姓名（8）性别 电话（11）地址（31） \n");
				printf("********************\n");
				p= (ListNode *) mailloc(sizeof(ListNode));
				scanf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
				InsertNode (head.p);
				break;
			case 3:
				printf("********************\n");
				printf(" *通讯录结点的查询 *\n");
				printf("********************\n");
				p=ListFind (head);
				if (p! = NULL) 
				{
					printf("编号 姓名 性别 联系电话 地址 \n");
					printf("-----------------------------\n");
					printf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
					printf("-----------------------------\n");
				}
				else
				    printf("没有查询到查询的通讯者！\n");
				break;
			case 4:
				printf("********************\n");
				printf("* 通讯者结点的删除 *\n");
				printf("********************\n");
				DelNode (head);
				break;
			case 5:
				printf("********************\n");
				printf("* 通讯录链表的输出 *\n");
				pintnf("********************\n");
				PrintList (head);
				break;
			case 0:
				printf("\t 退出管理系统 \n");
				return; 
			}
	    }
   } 
   
/****************/
/* 输出主控菜单 */
/****************/
int menu_select()
{
	int sn;
	printf("欢迎进入通讯录管理程序：\n");
	printf("1.通讯录链表的建立 \n");
	printf("2.通讯录结点的插入 \n");
	printf("3.通讯录结点的查询 \n");
	printf("4.通讯录结点的删除 \n");
	printf("5.通讯录链表的输出 \n");
	printf("0.退出管理系统 \n");
	printf("请用数字键0 ~ 5来选择菜单：");
	for(;;)
	{
		scanf("%d",&sn);
		if (sn<0||sn>5)
		    printf("\n\t输入错误，只允许输入0~5数字键！\n");
		else
		    break;
	}
	return sn;
 } 

/************************/
/*用尾插法建立通讯录链表*/
/************************/
LinkList CreatList (void)
{
	LinkList head=(ListNode *) malloc (sizeof(ListNode)); //动态生成头结点
	ListNode *p,*rear;
	int flag=0; //定义录入结束符
	rear=head; //尾指针初始化指向头结点
	while (flag==0)
	{
		//只要录入不为0，则不停地采用尾插法建立链表
		p=(ListNode *) malloc (sizeof(ListNode));
		printf("编号 姓名 性别 联系电话 地址 \n");
		printf("-----------------------------\n");
		scanf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
		rear->next=p; //新结点连接为尾结点的后继
		rear=p; //尾结点移动到新建结点位置
		printf("结束建表吗？（1/0）：");
		scanf("%d",&flag); //读入一个标志位到flag
	 } 
	 rear->next=NULL; ///建表结束，最后一个结点的指针域置为NULL
	 return head; //返回链表的头指针 
 } 
/********************/
/* 通讯录结点的插入 */
/********************/
void InsertNode(LinkList head,ListNode *p)
{
	ListNode *p1,*p2;
	p1=head;
	p2=p1->next;
	while (p2!=NULL&&strcmp(p2->data.num,p->data.num)<0)
	{
		p1=p2; //p1指向刚访问过的结点
		p2=p1->next; //p2指向表的下一个结点 
	 } 
	 p1->next=p; //插入p所指向的结点
	 p->next=p2; //连接表中剩余部分 
 } 
