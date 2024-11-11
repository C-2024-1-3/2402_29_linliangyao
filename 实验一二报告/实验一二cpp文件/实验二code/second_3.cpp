#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float a,b,c,zhouchang;
    cout<<"请输入三角形的三条边"<<endl;
    cin>>a>>b>>c;
    if(a+b<=c||b+c<=a||a+c<=b)
    {
        cout<<"输入数据有错误"<<endl;
    }
    else 
    {
        zhouchang=a+b+c;
        cout<<"这个三角形的周长="<<zhouchang<<endl;
        if(a==b||b==c||c==a)
        {
            cout<<"这个三角形是等腰三角形"<<endl;
        }
    }
    return 0;
}
