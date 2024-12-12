#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


int parseHex(const char *const hexString);
int main()
{
    int size=999;
    char hexString[size];
    cout<<"请输入字符串"<<endl;
    cin.getline(hexString,size);
    int j=0;
    char k[j];
    for ( ; hexString[j]!=0; ++j)    //用于转换字符串的代码
    {
       k[j]=hexString[j];
    }
   
    
    cout<<parseHex(k)<<endl;
  

    return 0;
}

int parseHex(const char *const hexString)
{
    int a;
    a=strlen(hexString);
    double p[a];
    for (int i = 0; i < a; i++)
    {
        if ((int)hexString[i]==48)
        {
            p[i]=0;
        }
        else if((int)hexString[i]==49)
        {
            p[i]=1;
        } 
            else if((int)hexString[i]==50)
        {
            p[i]=2;
        } 
            else if((int)hexString[i]==51)
        {
            p[i]=3;
        } 
            else if((int)hexString[i]==52)
        {
            p[i]=4;
        }
            else if((int)hexString[i]==53)
        {
            p[i]=5;
        } 
            else if((int)hexString[i]==54)
        {
            p[i]=6;
        } 
            else if((int)hexString[i]==55)
        {
            p[i]=7;
        }
            else if((int)hexString[i]==56)
        {
            p[i]=8;
        } 
            else if((int)hexString[i]==57)
        {
            p[i]=9;
        } 
            else if((int)hexString[i]==65)
        {
            p[i]=10;
        } 
            else if((int)hexString[i]==66)
        {
            p[i]=11;
        } 
            else if((int)hexString[i]==67)
        {
            p[i]=12;
        }
            else if((int)hexString[i]==68)
        {
            p[i]=13;
        } 
            else if((int)hexString[i]==69)
        {
            p[i]=14;
        } 
            else if((int)hexString[i]==70)
        {
            p[i]=15;
        } 
            else 
        {
            break;
        } 
    }
double sum=0;
for (int b = 0; b <a; b++)
{
    sum=sum+(p[b])*(pow(16,(a-b-1)));
}

     return sum;
}
