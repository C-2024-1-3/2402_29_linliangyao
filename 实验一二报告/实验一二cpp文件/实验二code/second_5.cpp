#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char zifu;
    int a=0,b=0,c=0,d=0;
    cout<<"请输入一行字符：";
    zifu=getchar();
    while (zifu!='\n')
    {
        if (((zifu>=97)&&(zifu<=122))||((zifu>=65)&&(zifu<=90)))
        {
            a++;
            
        }
        else if(zifu ==' ')
        {
            b++;
        }
        else if((zifu>=48)||(zifu<=57))
        {
            c++;
            
        }
        else
        {
            d++;
        }
        zifu=getchar();
    }
    cout<<"英文字母的数量="<<a<<endl;
    cout<<"空格的数量="<<b<<endl;
    cout<<"数字字符的数量="<<c<<endl;
    cout<<"其他字符的数量="<<d<<endl;
    
    return 0;
}