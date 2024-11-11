#include<iostream>
using namespace std;
double sp(double);
int main()
{
    double a;
    cout<<"请输入a"<<endl;
    cin>>a;
    
    if(a<0)
    {
        cout<<"输入的数据有错误"<<endl;
    }
    else
    {
        sp(a);
       cout<<"a的平方根="<<sp(a)<<endl;
    }
    return 0;
}

double sp(double x)
{
    double k=0.00001;
    double l=0.0;
    double h=x;
    double m=(h+m)*(0.5);
    while (h-l>k)
    {
       if(m*m>x)
       {h=m;}
       else
       {l=m;}
        m=(h+l)*(0.5);
    }
    return m;
}
