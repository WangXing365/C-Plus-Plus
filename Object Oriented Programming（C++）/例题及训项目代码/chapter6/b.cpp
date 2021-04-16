int fn(int);
int a=9;
extern int gg();
int fn(int n)
{
n+= gg();
return n+a;


}