
class Book				//图书类
{
protected:
	char Title[40];		//书名
	long BarCode;		//条码
	int  Type;			//0表示书籍，1表示杂志
public:
//	Book *Next;         //为构造读者所借书链表定义的指针
public:
	Book();
	Book(char *title,long code);
	void SetBarCode(long code){BarCode = code;}
	void SetTitle(char *tl){strcpy(Title,tl);}
	void SetType(bool type){Type = type;}
	int  GetType(){ return Type; }
    long GetBarCode(){ return BarCode; }
	virtual void Show(); //显示函数定义为虚函数
};

class Item: public Book  //书籍类
{
//	char Title[40];      //书名，从基类继承下来
	char Author[20];	 //作者
	char IndexCode[10];  //分类号
//	long BarCode;		 //条形码,从基类继承下来的
public:
	Item();
	Item(char *author,char *title,char *index,int code ); //构造函数
	//void SetTitle(char []);//从基类继承下来的
	void SetAuthor(char []);
	void SetIndexCode(char[]);
	//void SetBarCode(long); //从基类继承下来的
	//long GetBarCode(){return BarCode;}//继承下来的
	void Show();			 //重定义函数，显示书籍信息
};
class Magazine: public Book				 //杂志类
{
	int Volume;							 //卷号
	enum LANG { CHINESE=1,ENGLISH} Lang; //语言种类
public:
	Magazine():Book(){Volume=0;Lang = CHINESE; Type = 1;}
	Magazine(char *title,int vol,LANG lang,int code);
//	Magazine(Magazine &);
	void SetVolume(int vol){Volume = vol;}
	void SetLang(int lang){Lang = (LANG)lang;}
	void Show();						//重定义函数，显示杂志信息
};

class Reader				//读者类
{
	char Name[20];
	char Position[20];		//职务
	long Code;				//借书证号
public:
	Item items[10];			//所借书
	//Book *items;          //借书链表
	Magazine mags[10];		//所借杂志
public:
	Reader();
	Reader(char *name,char *posi,int code);
//	Reader(Reader &);
//	~Reader(){}
	long GetCode(){return Code;}
	void SetName(char []);
	void SetPosition(char []);
	void SetCode(long);
	void AddBook(Item it);    //添加所借书
	void AddBook(Magazine it);//添加所借杂志
	void DelBook(Item it);    //还书后减少所借书
	void DelBook(Magazine it);//还杂志后减少所借杂志
	int  ShowBooks();		  //显示借书信息
	void ShowReader(){cout<<Name<<","<<Position<<","<<Code<<endl;}
	int  itemCounter;		  //计数器,统计所借书数目
	int  zazCounter;		  //计数器,统计所借杂志数目
};

class CMain					  //操作类
{
	int itemNum;			  //库存书籍总数
	int magNum;				  //库存杂志总数
	int readNum;			  //读者注册入库人数
	Item item[100];
	Magazine mag[100];
	Reader reader[50];
public:
	CMain();
	void CreateBookItem();		//书籍和杂志入库操作
	void CreateReader();		//读者注册登记
	void ShowMenu();			//主菜单显示
	void Return();				//书籍和杂志入的归还操作 
	void Borrow();				//书籍和杂志入的借阅操作
	void Require();				//查询借阅信息
	void fnShowBook();  		//显示库存书籍和杂志信息
	void fnShowReader();		//显示登记注册的读者信息
	void fnDataSave(char *fname);
	void fnDataLoad(char *fname);
};