#include<iostream>
using namespace std;
int main()
{
    const double pi=3.14159;
    double h,r,V;
    cout<<"请依次输入圆锥的锥高，半径"<<endl;
    cin>>h>>r;
    if(h<=0 || r<=0)
    
    cout<<"输入的数据有错误"<<endl;
    
    else
    {
V=(0.33)*h*r*r*pi;      //这里，定义了三分之一等于0.33
cout<<"圆锥的体积V="<<V<<endl;
    }
    return 0;
}