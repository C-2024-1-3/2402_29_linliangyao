#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float x,y;
    cout<<"输入x的值"<<endl;
    cin>>x;
    if(x<1 && x>0)
    {
        y=3-2*x;
        cout<<"y="<<y<<endl;
    }
    else if(x>=1 && x<5)
    {
        y=(1/x)*(0.5)+1;
        cout<<"y="<<y<<endl;
    }
    else if(x>=5 && x<10)
    {
        y=x*x;
        cout<<"y="<<y<<endl;
    }
    else
    cout<<"x的输入值不符合函数范围"<<endl;
    return 0;
}
