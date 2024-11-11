#include<iostream>
using namespace std;
int main()
{
    const double apple=0.8;
    int i,sum=0,j;
    for (i=2,j=0;sum<=100; i*=2)
    {
        j=++j;
        sum+=i;
        if((sum*2)>=100)
        break;
    }
    double m=((sum*apple)/j);
    cout<<"每天买苹果平均花费"<<m<<"元"<<endl;
    return 0;
}
