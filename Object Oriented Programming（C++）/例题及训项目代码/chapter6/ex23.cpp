//【例6.23】用对象指针，访问类的成员。
    #include  <iostream.h>
    class A
	{    int i;
     public:
		 A(int n){ i = n; }
		 int get_i(){ return i; }
    };
    void main()
	{  
		A  a(66), *p;       //定义A类的对象a 和指向A类对象的指针变量 p
         p = &a;             //将对象a的地址赋给指针变量p，使指针p指向对象 a
         cout<<"&a="<<&a<<endl;
	    cout<<" p="<<p<<endl; 
         cout<<"   a.get_i()="<<a.get_i()<<endl;   //直接引用a的成员get_i()
         cout<<"  p->get_i()="<<p->get_i()<<endl;  //通过p间接引用a的成员
	    cout<<"(*p).get_i()="<<(*p).get_i()<<endl;//通过p间接引用a的成员
	}
