//项目2：图书借阅管理系统第三版
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "fstream.h"
#include "ex0.h"

Book::Book()
{
	strcpy(Title,"");
	BarCode = 0;
//	Next = NULL;
}

Book::Book(char *title,long code)
{
	strcpy(Title,title);
	BarCode = code;
    //	Next = NULL;
}

void Book::Show()
{
	cout<<"书籍：\t"<<Title<<'\t'<<BarCode<<endl;
}

Item::Item(){}
/*Item::Item(Item &it)
{
	strcpy(Author,it.Author );
	strcpy(Title,it.Title );
	strcpy(IndexCode,it.IndexCode );
	BarCode = it.BarCode ;
	Type = it.Type;
}*/
Item::Item(char *author,char *title,char *index,int code ):Book(title,code) //构造函数
{
	strcpy(Author,author);
	strcpy(IndexCode,index);
	Type = 0;
}
//void Item::SetTitle(char tl[]){strcpy(Title,tl);}
void Item::SetAuthor(char tl[]){strcpy(Author,tl);}
void Item::SetIndexCode(char tl[]){strcpy(IndexCode,tl);}
//void Item::SetBarCode(long t){BarCode = t;}
void Item::Show()//显示书的信息
{
	cout<<"图书：\t"<<Title<<'\t'<<Author<<'\t'<<IndexCode<<'\t'<<BarCode<<endl;
}

Magazine::Magazine(char *title,int vol,LANG lang,int code):Book(title,code)
{
	Volume = vol;
	Lang = lang;
	Type = 1;
}
/*
Magazine::Magazine(Magazine &zz)
{
	strcpy(Title,zz.Title);
	Volume = zz.Volume;
	Lang = zz.Lang;
	BarCode = zz.BarCode;
	Type = 1;
}*/

void Magazine::Show()
{
	cout<<"杂志:\t"<<Title<<'\t'<<"券号:"<<Volume<<'\t';
	cout<<((Lang==1)?"Chinese":"English")<<BarCode<<endl;
}

Reader::Reader()
{
	strcpy(Name,"");
	strcpy(Position,"");
	itemCounter=0;
	zazCounter=0;
	Code = 0;
	//items = NULL;
}
Reader::Reader(char *name,char *posi,int code)
{
	strcpy(Name,name);
	strcpy(Position,posi);
	itemCounter=0;
	zazCounter=0;
	Code = code;
//	items = NULL;
}

/*Reader::Reader(Reader &rd)
{
	strcpy(Name,rd.Name);
	strcpy(Position,rd.Position);
	itemCounter=rd.itemCounter ;
	zazCounter=rd.zazCounter ;
	Code = rd.Code;
	for(int i=0;i<rd.itemCounter ;i++)
		items[i] = rd.items [i];
	for(int j=0;j<rd.zazCounter ;j++)
		mags[i] = rd.mags[i];
}*/
/*	//Item *p = rd.items,*q;
	Book *p = rd.items,*q;
	while(p)
	{
		q = new Item;
		*q = *p;
		if(Counter==0)items=q;
		p=p->Next;
		Counter++;
	}*/

void Reader::SetName( char t[]){strcpy(Name,t);}
void Reader::SetPosition(char t[]){strcpy(Position,t);}
void Reader::SetCode(long t){Code = t;}
void Reader::AddBook(Item it)		//添加所借书件
{
/*	Item *p;
	p = new Item();					//创建一个新结点
	if(p){ *p = it; p->Next = items;//插入表头，items为表头指针
		items = p; 
		Counter++;
	}*/
	if(itemCounter<10)
	{
		items[itemCounter++]=it;
	}
}
void Reader::AddBook(Magazine it)   //添加所借书件
{
	/*Magazine *p;
	p = new Magazine();			    //创建一个新结点
	if(p){ *p = it; p->Next = items;//插入表头，items为表头指针
		items = p; 
		Counter++;
	}*/
	if(zazCounter<10)
	{
		mags[zazCounter++]=it;
	}
}
void Reader::DelBook(Item it)          //删除所还书信息
{
	int i=0;
	do {
		if(items[i].GetBarCode() == it.GetBarCode())
		{
		    for(int j=i;j<itemCounter;j++)
				items[j] = items[j+1];
			itemCounter--;
			break;
		}
		i++;
	}while(i<itemCounter);
}
void Reader::DelBook(Magazine it)       //删除所借书件
{
	int i=0;
	do {
		if(mags[i].GetBarCode() == it.GetBarCode())
		{
		    for(int j=i;j<zazCounter;j++)
				mags[j] = mags[j+1];
			zazCounter--;
			break;
		}
		i++;
	}while(i<zazCounter);
}

/*void Reader::DelBook(Book it)       //删除所借书件
{
	Book *p = items, *q;
	while( p->GetBarCode() != it.GetBarCode() && p != NULL )
	{
		q = p;
		p = p->Next;
	}
	if( p->GetBarCode() == it.GetBarCode())
	{
		if( p == items )items = p->Next;
		else q->Next = p->Next;

		delete p;
		Counter--;
	}

}*/

int  Reader::ShowBooks()
{
	if(itemCounter==0&&zazCounter==0)
	{cout<<"你未借书！";return 0;
	}
	for(int i=0;i<itemCounter;i++)items[i].Show();
	for(int j=0;j<zazCounter;j++)mags[j].Show();
	
	/*	Book *p = items;
	if(p==NULL){cout<<"你未借书！";return 0;}
	cout<<"这是你所借的书:\n";
	while(p){
		p->Show();
		p=p->Next;
	}*/
	return 1;
}

CMain::CMain()
{
	itemNum=0;
	readNum=0;
	magNum =0;
}
/*void CMain::CreateBookItem(Item item[])
{	
	char s1[40],s2[20],s3[10],c;
	long code;
	int i=itemNum;
	do {
		cout<<"\t\t创建书目(书名,作者,分类号,条码),请输入\n";
		cout<<"\t\t  书名："; cin.getline (s1,40);
		cout<<"\t\t  作者："; cin.getline (s2,40);
		cout<<"\t\t分类号："; cin.getline (s3,40);
		cout<<"\t\t  条码："; cin>>code;cin.get();
		item[i].SetTitle(s1);
		item[i].SetAuthor(s2);
		item[i].SetIndexCode(s3);
		item[i].SetBarCode(code);
		cout<<"\t\t继续吗？Y(y)es /N(n): ";
		cin>>c;
		cin.get();
		i++;
	}while(c=='Y'||c=='y'||(c!='n' &&c!='N'));
	itemNum = i;
}*/

void CMain::CreateReader()//创建读者库
{	
	char s1[40],s2[20],c;
	long code;
	int j=readNum;
	do {
		cout<<"\t\t注册读者信息(姓名   职务  借书证号)\n";
		cout<<"\t\t    姓名：";cin.getline (s1,40);
		cout<<"\t\t    职务：";cin.getline (s2,20);
		cout<<"\t\t借书证号：";cin>>code;
		reader[j].SetName(s1);
		reader[j].SetPosition(s2);
		reader[j].SetCode(code);
		cout<<"\t\t继续吗？Y(y)es /N(n): ";
		cin>>c;
		cin.get();
		j++;
	}while(c=='Y'||c=='y');
	readNum = j;
}
/*
void CMain::Return(Reader reader[],Item item[])
{
	int code,barcode,i,j;
	Item it;
	Reader rd;
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
	for(j=0;j<reader[i].Counter ;j++)
		if(reader[i].items[j].GetBarCode ()==barcode)
		{
			reader[i].DelBook (reader[i].items[j]);
			item[itemNum++] = reader[i].items[j];
			break;
		}
}*/
void CMain::CreateBookItem()
{	
	char s1[40],s2[20],s3[20],c;
	long code;
	int type,vol;
	int i=itemNum;
	int j= magNum;
	do {
		cout<<"创建书目,请选择1: 图书\t 2：杂志\n";
		cin>>type;
		cin.get();
		switch(type){
		case 1:
			cout<<"\t请输入书目信息(书名,作者,分类号,条码)\n";
			cout<<"\t  书名："; cin.getline (s1,40);
			cout<<"\t  作者："; cin.getline (s2,20);
			cout<<"\t分类号："; cin.getline (s3,20);
			cout<<"\t  条码："; cin>>code;cin.get();
			item[i].SetTitle(s1);
			item[i].SetAuthor(s2);
			item[i].SetIndexCode(s3);
			item[i].SetBarCode(code);
			item[i].SetType (0);
			i++;
			break;
		case 2:
			cout<<"\t请输入杂志信息(杂志名,语言,券号,条码)\n";
			cout<<"\t 杂志名："; cin.getline (s1,40);
			cout<<"\t 语言(1中文，2英文）：";cin>>type;
			cout<<"\t 券号：";  cin>>vol;
			cout<<"\t 条码："; cin>>code;cin.get();
			mag[j].SetTitle(s1);
			mag[j].SetLang(type);
			mag[j].SetVolume (vol);
			mag[j].SetBarCode(code);
			mag[j].SetType(1);
			j++;
			break;
		default: 
			cout<<"输入错误！请重新选择\n";
			continue;
		}
		cout<<"\t\t继续吗？Y(y)es /N(n): ";
		cin>>c;
		cin.get();
	}while(c=='Y'||c=='y');
	itemNum = i;
	magNum = j;
}
//借阅图书杂志
void CMain::Borrow()
{
	int code,barcode,type,i,j;
	Item it;
	Magazine zz;
	if(itemNum == 0 && magNum == 0 ){cout<<"没有图书可借！";return;	}
	cout<<"请输入读者借书证号: ";
	cin>>code;	cin.get();
	for( i=0; i<readNum; i++)
	{
		if( code == reader[i].GetCode ())break;
	}
	if( i == readNum )
	{
		cout<<"\t借书证不存在！";
		return;
	}

	do {
		cout<<"借书，请选择1: 书\t 2:杂志\n";
		cin>>type; cin.get();
		switch(type){
		case 1:
			cout<<"书名\t作者\t分类号\t条码\n";
			for(j=0;j<itemNum;j++)//查找书
				item[j].Show ();
			cout<<"借书，请选择图书条码: ";
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
			break;
		case 2:
			cout<<"杂志名\t 券号\t语言\t条码\n";
			for(j=0;j<magNum;j++)		 //查找杂志
				mag[j].Show ();
			cout<<"借书，请选择杂志条码: ";
			cin>>barcode;
			for(j=0;j<magNum;j++)//匹配
			if(mag[j].GetBarCode ()==barcode)
			{
				zz = mag[j];
				reader[i].AddBook (zz);
				for(int k=j;k<magNum;k++)//从可借阅杂志中删除借出的杂志
					mag[k] = mag[k+1];
				magNum--;
				break;
			}
			break;
		default:	cout<<"输入错误！请重新选择\n";	continue;
		}
	}while(type !=1&&type !=2);
}
//还书
void CMain::Return()
{   //Book  *p;
	int i,j;//,type;
	long barcode,code;
//	Item  *it;
//	Magazine *ma;
//	Reader rd;
	cout<<"还书，请输入借书证号\n";
	cin>>code;
	cin.get ();
	for(i=0;i<readNum;i++)  //认证借书证
	{
		if( code == reader[i].GetCode() )
		{
			if(reader[i].ShowBooks()==0)return;//你没有借书
			break;
		}
	}
	if(i==readNum){cout<<"没有此号码，请重新选择！\n";return;}
//	cout<<"请输入类别：1(图书），2（杂志）：";
	//cin>>type;
	cout<<"请选择待还书的条码\n";
	cin>>barcode;
	//p = reader[i].items;
	for(j=0;j<reader[i].itemCounter ;j++ )
      	if(reader[i].items[j].GetBarCode ()==barcode)
		{   item[itemNum++] = reader[i].items[j];  //添加到书库中
			reader[i].DelBook(reader[i].items[j]);//从借书单中删除
			return;
		}
	for(j=0;j<reader[i].zazCounter ;j++ )
	   if(reader[i].mags[j].GetBarCode ()==barcode)
	   {    mag[magNum++] = reader[i].mags[j];//添加到杂志库中
			reader[i].DelBook (reader[i].mags[j]);//从借书单中删除
			return;
	   }
}
/*
void CMain::Borrow(Reader reader[],Item item[])
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
}*/
void CMain::Require()//借书查询
{
	int code,i;
	cout<<"查询，请输入借书证号: ";
	cin>>code;
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())
		{
			cout<<"这是你所借的书\n";
			if(reader[i].ShowBooks()==0)return;
			break;
		}
	}
	if(i==readNum)cout<<"没有此号码，请重新选择！\n";
	cin.get();
}
void CMain::fnDataSave(char *fname)
{
	Item kk;
	Magazine zz;
	Reader qq;
	fstream  file(fname,ios::out|ios::binary);
	if(!file)
	{
		cout<<"打开"<<fname<<"文件失败！\n";cin.get ();
		return;
	}
	file.write((char *)&itemNum,sizeof(int));     //保存图书册数
	file.write((char *)&magNum,sizeof(int));      //保存杂志册数
	file.write((char *)&readNum,sizeof(int));	  //保存读者人数
	file.write ((char *)item,sizeof(kk)*itemNum);
	file.write ((char *)mag,sizeof(zz)*magNum);
	file.write ((char *)reader,sizeof(qq)*readNum);
	file.close ();
}
void CMain::fnDataLoad(char *fname)
{
	Item kk; 
	Magazine zz;
	Reader qq;
	fstream  file;
	file.open (fname,ios::in|ios::binary);
	if(!file)
	{
		cout<<"打开"<<fname<<"文件失败！\n";cin.get ();
		return;
	}
	file.read((char *)&itemNum,sizeof(int));       //加载图书册数
	file.read((char *)&magNum,sizeof(int));        //加载杂志数
	file.read((char *)&readNum,sizeof(int));	   //加载读者人数

	file.read((char *)item,sizeof(kk)*itemNum);
	file.read((char *)mag,sizeof(zz)*magNum);
	file.read((char *)reader,sizeof(qq)*readNum);
	file.close ();
}

void CMain::fnShowBook()			//显示库存书籍和杂志信息
{ 
	cout<<"库存图书、杂志如下：\n";
	for(int i=0;i<itemNum;i++)
		item[i].Show ();
	for(int j=0;j<magNum;j++)
		mag[j].Show ();
}

void CMain::fnShowReader()			//显示登记注册的读者信息
{
	cout<<"已注册读者清单：\n";
	for(int i=0;i<readNum;i++)
		reader[i].ShowReader ();
}
void CMain::ShowMenu()
{
	system("cls");
    cout<<"\n";
    cout<<"\t$***********图书借阅管理系统*********$\n";
    cout<<"\t$       0. 退出                      $\n";
    cout<<"\t$       1. 新书入库                  $\n";
    cout<<"\t$       2. 读者登记                  $\n";
    cout<<"\t$       3. 借书                      $\n";
    cout<<"\t$       4. 还书                      $\n";
    cout<<"\t$       5. 借书查询                  $\n";
    cout<<"\t$       6. 库存查询                  $\n";
    cout<<"\t$       7. 读者清单                  $\n";
    cout<<"\t$************************************$\n";
    cout<<"\t\t请选择您的操作(0-7):";
}
void main()			
{ 
    int n=1;
	CMain  a;
    do 
	{
		a.ShowMenu();  //显示菜单界面
		a.fnDataLoad("D:\\libery.dat");
		cin>>n;	//输入选择功能的编号
		cin.get ();
		system("cls");

		switch(n)
		{
		case 1: a.CreateBookItem();break;
		case 2: a.CreateReader(); break;
		case 3: a.Borrow();	break;
		case 4:	a.Return();break; 
		case 5: a.Require();break;
		case 6: a.fnShowBook();break;
		case 7: a.fnShowReader();break;
		default: break;
		}
		a.fnDataSave("D:\\libery.dat");
		if(n){	cout<<"\n\t\t按任意键返回主菜单";cin.get();	}
	}while(n);
	cout<<"\n\n\n\n\n\t\t谢谢您的使用！\n\t\t";
}

       