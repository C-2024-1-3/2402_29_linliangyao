#include <iostream>
using namespace std;

/*从小到大的数组排序算法*/

const int a=10;

void bubble_sort(double list[10])   //使用了排序算法
{
    double ak47;
    bool changed = true;
do
{
changed = false;
for (int j = 0; j < a-1; j++)
	if (list[j] > list[j+1])
	{
	   ak47=list[j];           //实现比较交换
       list[j]=list[j+1] ;
       list[j+1]=ak47;
	  changed = true;
	}
} 
while (changed);

}

int main()
{
    double numble[a];

    cout<<"输入十个双精度数字："<<endl;

    for (int i = 0; i < a; i++)   //实现输入数字
    {
        cin>>numble[i];
    }
    bubble_sort(numble);
    for (int k= 0; k < a; k++)
    {
        cout<<numble[k]<<" ";
    }
    cout<<endl;


return 0;

}
