//【例9.12】 多个catch语句的执行。
 #include <iostream.h>
 void fnFun(int );
 void fnFun(int x)
 {   
	try
	{
		if(x==0)throw x;
		else if(x<0)throw "字符串异常";
		else throw 2.5;
	}
	catch (int n)                            //A
     {
        cout<<"异常对象为："<<n<<endl;
     }
		catch (char *str)                        //B
     {
        cout<<"异常对象为："<<str<<endl;
     }
		catch (...)                              //C
     {
        cout<<"异常对象为：函数调用异常"<<endl;
     }
 }
 void main()
 {
		fnFun(-2);
		fnFun(0);
		fnFun(2);
 } 
