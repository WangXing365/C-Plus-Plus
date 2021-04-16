class Item
{
	char Title[40];			//书名
	char Author[20];		//作者
	char IndexCode[10];		//分类号
	long BarCode;			//条形码
public:
	Item();
	//Item(Item &it);
	void SetTitle(char []); //设置书名
	void SetAuthor(char []);
	void SetIndexCode(char[]);
	void SetBarCode(long);
	long GetBarCode(){return BarCode;}
	void Show();			//显示书的信息
};

class Reader
{
	char Name[20];		  //姓名
	char Position[20];	  //职务
	long Code;			  //借书证号
public:
	Item items[10];		  //所借书
public:
	Reader();
	long GetCode(){return Code;}
	void SetName(char []);
	void SetPosition(char []);
	void SetCode(long);
	void AddBook(Item it);//添加所借书
	void DelBook(Item it);//删除所借书
	void ShowBooks();	  //显示已借书信息
	void ShowReader(){cout<<Name<<","<<Position<<","<<Code<<endl;}
	int  itemCounter;	  //借书计数器
};

class CMain
{
	int itemNum;            //库存书籍总册数
	int readNum;			//已注册读者数
	Item item[500];         //存储书籍
	Reader reader[50];		//存储读者

public:
	CMain();
	void CreateBookItem();  //创建书目，书籍入库
	void CreateReader();	//读者注册
	void ShowMenu();		//菜单显示
	void Return();			//还书
	void Borrow();			//借书
	void Require();			//查询已借书信息
	//void fnDataSave(char *fname);//保存数据
	//void fnDataLoad(char *fname);//加载数据
};