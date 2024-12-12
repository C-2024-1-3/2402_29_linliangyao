#include <iostream>
using namespace std;

/*本代码关于数组1*/

int main()
{
    const int a=10;     //定义数组大小
    int size[a];

    cout<<"输入十个数字"<<endl;

    for (int i = 0; i < a; i++)     //实现输入的代码
    {
        cin>>size[i];/* code */
    }
    cout<<size[0]<<" ";//为了保持整洁的代码

    for (int m = 1; m < a; m++)         //用于实现数字比较的代码
    {
        for (int j = 0; j < m; j++)
        {
            if (size[m]!=size[j])
            {
                if(j==m-1)
                cout<<size[m]<<" ";
                else
                    continue;/* code */
            }
            else
                break;/* code */
        }
        /* code */
    }
    
    cout<<endl;

    return 0;
}
