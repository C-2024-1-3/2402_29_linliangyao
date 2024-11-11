#include<iostream>
using namespace std;
int main()
{
    unsigned int a,b,c,i,n;
    cout<<"请输入两个正整数a,b"<<endl;
    cin>>a>>b;
    const unsigned int e=a;
    const unsigned int f=b;
    if(a==b)
    {
        cout<<"a,b的最大公约数是"<<a<<endl;
        cout<<"a,b的最小公倍数是"<<b<<endl;
    }
    else if(a!=b)
    {
        if (a>b)
        {
            while (b!=0)
            {
                c=a%b;
                a=b;
                b=c;
            }
             cout<<"a,b的最大公约数是"<<a<<endl;
          for ( i = 1;e%(a*i)==0; )
          {
            a=a*(++i); /* code */
          }
          cout<<"a,b的最小公倍数是"<<(a*(i+1))<<endl;
        }
        else if(a<b)
        {
        while (a!=0)
            {
                c=b%a;
                b=a;
                a=c;
            }
             cout<<"a,b的最大公约数是"<<b<<endl;
                for ( n = 1;f%(b*n)==0; )
          {
            b=b*(++n) ;
          }
          cout<<"a,b的最小公倍数是"<<(b*(n+1))<<endl;
        }
    }
    return 0;
}
