#include <iostream>
using namespace std;

bool is_prime(int );   //函数的声明

int main()

{
    int num;
    int k=0;

    for ( num=2; num<=200;num++)         //该循环用于打印素数;
    {
        if(is_prime(num)||num==2)
        {
            k=++k;
            if((k%10)!=0)
            {cout<<num<<'\t';}
            else
            {cout<<num<<'\n';}
        }
    }
    
    return 0;
}

bool is_prime(int x)     //用于求素数的函数

{
    int i=2;
   
        while (x%i!=0)
        {
            if(x!=(i+1))
            {i=++i;}
            else
            {return true;}
        }
        return false;
}



