#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//#include  "fstream.h"

#include "ex0.h"
Item::Item(){}					//构造函数
/*Item::Item(Item &it)
{
	strcpy(Author,it.Author );
	strcpy(Title,it.Title );
	strcpy(IndexCode,it.IndexCode );
	BarCode = it.BarCode ;
}*/

void Item::SetTitle(char tl[]){strcpy(Title,tl);}
void Item::SetAuthor(char tl[]){strcpy(Author,tl);}
void Item::SetIndexCode(char tl[]){strcpy(IndexCode,tl);}
void Item::SetBarCode(long t){BarCode = t;}
void Item::Show()				//显示书的信息
{
	cout<<Title<<'\t'<<Author<<'\t'<<IndexCode<<'\t'<<BarCode<<endl;
}

Reader::Reader(){itemCounter=0;}
void Reader::SetName( char t[]){strcpy(Name,t);}
void Reader::SetPosition(char t[]){strcpy(Position,t);}
void Reader::SetCode(long t){Code = t;}
void Reader::AddBook(Item it)	//添加所借书籍
{
	if(itemCounter<10)
		items[itemCounter++]=it;
}

void Reader::DelBook(Item it)  //还书，从所借书籍清单中清除
{
	if(itemCounter>0)
	{   
		int i=0;
	do {
		if(items[i].GetBarCode()==it.GetBarCode())
		{
		   for(int j=i;j<itemCounter;j++)
			   items[j]=items[j+1];	
			itemCounter--;
			break;
		}
		i++;
	}while(i<itemCounter);
}
}
void Reader::ShowBooks()
{
	for(int i=0;i<itemCounter;i++)
		items[i].Show();
	cin.get();
}

CMain::CMain()						//构造函数
{
	itemNum=0;
	readNum=0;
}
void CMain::CreateBookItem()		//创建书目
{	
	char s1[40],s2[20],s3[10],c;
	long code;
	int i=itemNum;
	do {
		cout<<"\t\t创建书目(书名,作者,分类号,条码)\n";
		cout<<"\t\t  书名："; cin.getline (s1,40);
		cout<<"\t\t  作者："; cin.getline (s2,40);
		cout<<"\t\t分类号："; cin.getline (s3,40);
		cout<<"\t\t  条码："; cin>>code;cin.get();
		item[i].SetTitle(s1);
		item[i].SetAuthor(s2);
		item[i].SetIndexCode(s3);
		item[i].SetBarCode(code);
		cout<<"\t\t继续吗？Y(y)es /N(n)o: ";
		cin>>c;
		cin.get();
		i++;
	}while(c=='Y'||c=='y');
	itemNum = i;
}

void CMain::CreateReader()				//创建读者库
{	
	char s1[40],s2[20],c;
	long code;
	int j=readNum;
	do {
		cout<<"\t\t创建读者信息(姓名   职务  借书证号)\n";
		cout<<"\t\t    姓名：";cin.getline (s1,40);
		cout<<"\t\t    职务：";cin.getline (s2,20);
		cout<<"\t\t借书证号：";cin>>code;
		reader[j].SetName(s1);
		reader[j].SetPosition(s2);
		reader[j].SetCode(code);
		cout<<"\t\t继续吗？Y(y)es /N(n)o: ";
		cin>>c;
		cin.get();
		j++;
	}while(c=='Y'||c=='y');
	readNum = j;
}

void CMain::Return()				//还书
{
	int code,barcode,i,j;
	cout<<"还书，请输入借书证号\n";
	cin>>code;
	cin.get ();
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())
		{
			cout<<"这是你所借的书:\n";
			reader[i].ShowBooks ();
			break;
		}
	}
	if(i==readNum){cout<<"没有此号码，请重新选择！\n";return;}
	cout<<"请选择待还书的条码\n";
	cin>>barcode;
	for(j=0;j<reader[i].itemCounter ;j++)
		if(reader[i].items[j].GetBarCode ()==barcode)
		{
			reader[i].DelBook (reader[i].items[j]);
			item[itemNum++] = reader[i].items[j];
			break;
		}
}

void CMain::Borrow()				//借书
{
	int code,barcode,i,j;
	Item it;
	cout<<"请输入借书证号: ";
	cin>>code;
	cin.get();
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())break;
	}
	if(i==readNum)
	{
		cout<<"借书证不存在！";
		return;
	}
	cout<<"书名\t作者\t分类号\t条码\n";
	for(j=0;j<itemNum;j++)//查找书
		item[j].Show ();
	cout<<"借书，请选择书本条码: ";
	cin>>barcode;
	for(j=0;j<itemNum;j++)//匹配
		if(item[j].GetBarCode ()==barcode)
		{
			it = item[j];
			reader[i].AddBook (it);
			for(int k=j;k<itemNum;k++)//从可借阅书中删除借出的书
				item[k] = item[k+1];
			itemNum--;
			break;
		}
}
void CMain::Require()				//查询借书清单
{
	int code,i;
	cout<<"查询，请输入借书证号: ";
	cin>>code;
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())
		{
			cout<<"这是你所借的书\n";
			reader[i].ShowBooks ();
			break;
		}
	}
	if(i==readNum)
	{
		cout<<"没有此借书证号，请重新选择！\n";
		cin.get();
	}
}
/*void CMain::fnDataSave(char *fname)
{
	Item kk;
	Reader qq;
	fstream  file(fname,ios::out|ios::binary);
	if(!file)
	{
		cout<<"打开"<<fname<<"文件失败！\n";cin.get ();
		return;
	}
	file.write((char *)&itemNum,sizeof(int));     //保存图书册数
	file.write((char *)&readNum,sizeof(int));		//保存读者人数
	file.write ((char *)item,sizeof(kk)*itemNum);
	file.write ((char *)reader,sizeof(qq)*readNum);
	file.close ();
}
void CMain::fnDataLoad(char *fname)
{
	Item kk; 
	Reader qq;
	fstream  file;
	file.open (fname,ios::in|ios::binary);
	if(!file)
	{
		cout<<"打开"<<fname<<"文件失败！\n";cin.get ();
		return;
	}
	file.read((char *)&itemNum,sizeof(int));       //保存图书册数
	file.read((char *)&readNum,sizeof(int));		//保存读者人数
	file.read((char *)item,sizeof(kk)*itemNum);
	file.read((char *)reader,sizeof(qq)*readNum);
	file.close ();
}*/
void CMain::ShowMenu()
{
	system("cls");
    cout<<"\n";
    cout<<"\t$************图书借阅管理系统********$\n";
    cout<<"\t$       0. 退出                      $\n";
    cout<<"\t$       1. 新书入库                  $\n";
    cout<<"\t$       2. 读者登记                  $\n";
    cout<<"\t$       3. 借书                      $\n";
    cout<<"\t$       4. 还书                      $\n";
    cout<<"\t$       5. 借书查询                  $\n";
    cout<<"\t$************************************$\n";
    cout<<"\t\t请选择您的操作(0-5):";
}
void main()			
{ 
    int n=1;
	CMain  a;
    do 
	{
		a.ShowMenu();   //显示菜单界面
		cin>>n;			//输入选择功能的编号
		cin.get ();
		system("cls");
		switch(n)
		{
		case 1: a.CreateBookItem();break;
		case 2: a.CreateReader(); break;
		case 3: a.Borrow();	break;
		case 4:	a.Return();break; 
		case 5: a.Require();break;
	//	case 6: a.fnDataLoad("D:\\a.dat");break;
	//	case 7: a.fnDataSave("D:\\a.dat");break;
		default: break;
		}
		if(n){ cout<<"\n\t\t按任意键返回主菜单";cin.get ();	}
	}while(n);
	cout<<"\n\n\t\t谢谢您的使用！\n\t\t";
}

       