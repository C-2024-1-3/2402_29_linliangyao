#include<iostream>
using namespace std;
double funcA(double, double);
double funcB(double, double);
double funcC(double, double);
double funcD(double, double);
int funcE(int, int);
int main()
{
    double a,b;
    int n;
    char yushuanfu;
    cout<<"请依次输入数a,运算符,数b"<<endl;
    cin>>a>>yushuanfu>>b;
    n=yushuanfu;
    switch (n)
    {
    case 43:
    cout<<"="<<funcA(a,b)<<endl;
        break;
    case 45:
    cout<<"="<<funcB(a,b)<<endl;
        break;
    case 42:
    cout<<"="<<funcC(a,b)<<endl;
        break;
    case 47:
    cout<<"="<<funcD(a,b)<<endl;
        break;
    case 37:
    cout<<"="<<funcE(a,b)<<endl;
        break;
    default:
    cout<<"输入的运算符非法"<<endl;
        break;
    }
    return 0;
}

double funcA(double x,double y)
{
  double z=x+y;
  return z;
}

double funcB(double x,double y)
{
  double z=x-y;
  return z;
}

double funcC(double x,double y)
{
  double z=x*y;
  return z;
}

double funcD(double x,double y)
{
  double z;
  if(y==0)
  cout<<"不符合运算规则"<<endl;
  else
  z=x/y;
  return z;
}

int funcE(int x,int y)
{
    int z=x%y;
    return z;
}
