typedef struct
{
	char name[20];
	char sex; //设定性别标志“F ”为女性，“M ”为男性 
 } Person;
 typedef Person DataType;
 void DancePartner(Person dance[],int num)
{
	//数组dancer中存放跳舞的男士和女士，num存放跳舞的人数
	int i;
	Person p;
	CirQueue Mdancers,Fdancers;
	Init_Queue(&Mdancers); //初始化男性队列
	Init_Queue(&Fdancers); //初始化女性队列
	for(i=0;i<num;i++)  //依次将舞者按性别入队
	{
		p=dancer[i];
		if (p.sex=='F')
		In_Queue(&Fdancers.p); //女士排入女性队列
		else
		In_Queue(&Mdancers.p); //男士排入男性队列 
	 }
	 printf("正在跳舞的有：\n\n");
	 while(!Empty_Queue(&Fdancers)&&!Empty_Queue(&Mdancers))
	 {
	    p=Out_Queue(&Fdancers); //将女性出队配对
		printf("%s",p.name) //输出出队女性的名字
		p=Out_Queue(&Mdancers); //将男性出队配对
		printf("%s \n",p.name) //输出出队男性的名字
	  }
	if(!Empty_Queue(&Fdancers)) //输出女性队列剩余人数和队头女士姓名
	{
		printf("\n 还有%d个女士等待舞伴。\n",Fancers.count);
		p=Front_Queue(&Fdancers); //取队头上的女士信息
		printf("%s女士是接下来第一个要上场的。\n",p.name); 
	 }
	 else if(!Empty_Queue(&Mdancers)) //输出男性队列剩余人数和队头男士姓名
	{
		printf("\n 还有%d个男士等待舞伴。\n",Mancers.count);
		p=Front_Queue(&Mdancers); //取队头上的女士信息
		printf("%s男士是接下来第一个要上场的。\n",p.name); 
	 }
 } 
