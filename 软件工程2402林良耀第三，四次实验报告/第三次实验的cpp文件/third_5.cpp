#include <iostream>
using namespace std;

int main()
{
    int m=1;
    for (int i = 1; i<=9; i++)        //计算桃子数的循环
    {
        m=(m+1)*2;
    }
    cout<<"猴子第一天摘了"<<m<<"个桃子"<<endl;
    
    return 0;
}
