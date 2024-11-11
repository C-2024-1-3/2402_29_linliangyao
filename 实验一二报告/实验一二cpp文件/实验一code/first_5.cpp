#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double F,C;
    cout<<"请输入华氏温度"<<endl;
    cin>>F;
    C=(F-32)*(0.56);
    cout<<"对应的摄氏温度等于="<<C<<endl;
    return 0;
}
