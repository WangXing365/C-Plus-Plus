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
				printf("\t 退出管理系统 \n")
				  }
	  }
   } 
