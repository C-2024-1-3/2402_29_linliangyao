#include <iostream>
using namespace std;

int funcA(int ,int );          //此处声明下所用的函数
int funcB(int ,int ); 

int main()
{
    int m,n;
    cout<<"请输入m,n的值"<<endl;
    cin>>m>>n;
    cout<<"m,n的最大公因数="<<funcA(m,n)<<endl;
    cout<<"m,n的最小公倍数="<<funcB(m,n)<<endl;
    return 0;
}

int funcA(int x,int y)        //这条函数用于求m，n的最大公因数
{
     int c,t;
     if (x>=y)
     {
      while (y!=0)
            {
                c=x%y;
                x=y;
                y=c;
            }
         return x;
     }
     else
     {
       t=x,x=y,y=t;
       while (y!=0)
            {
                c=x%y;
                x=y;
                y=c;
            }
         return x;
     }
     
}

int funcB(int x,int y)               //这是用于求最小公倍数的函数
{
    int k=funcA(x,y);
    return ((x*y)/k);
}