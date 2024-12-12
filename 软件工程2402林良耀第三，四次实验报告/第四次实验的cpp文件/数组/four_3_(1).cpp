#include <iostream>
using namespace std;

/*解决储物柜问题的程序*/

const int a=100;

int main()
{
    bool mumu[a];//定义数组

    for (int i = 0; i < a; i++)//设置数组初始状态
    {
        mumu[i]=false;
    }
    for (int k = 0; k < a; k++)//模拟不同同学开柜子
    {
        for (int j = k; j < a; j+=k+1)
        {
            if (mumu[j])
            {
                mumu[j]=false;
            }
            else
            mumu[j]=true;
            
        }
        
    }

    for (int m = 0; m < a; m++)//将数组结果输出，注意数组对应元素的不同
    {
        if (mumu[m])
        {
            cout<<m+1<<" ";
        }
    }
    cout<<endl;

    return 0;
    
    
}