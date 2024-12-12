#include <iostream>
#include <string>
using namespace std;

/*数组的合并*/


void mage(const int list_1[],int size_1,const int list_2[],int size_2,int list_3[]);

int main()
{
    int size_1,size_2,size_3;
    cout<<"请输入数组1的元素数"<<endl;
    cin>>size_1;
    cout<<"请输入数组1的元素"<<endl;
    int list_1[size_1];
    for (int i = 0; i < size_1; i++)
    {
        cin>>list_1[i];
    }

    cout<<"请输入数组2的元素数"<<endl;
    cin>>size_2;
    cout<<"请输入数组2的元素"<<endl;
    int list_2[size_2];
      for (int j = 0; j < size_2; j++)
    {
        cin>>list_2[j];
    }

    size_3=size_1+size_2;
    int list_3[size_3];
    mage(list_1,size_1,list_2,size_2,list_3);

    return 0;
}




void mage(const int list_1[] ,int size_1,const int list_2[],int size_2,int list_3[])

{
    for (int i = 0; i < size_1; i++)
    {
        list_3[i]=list_1[i];       //将list_3赋值
    }
    for (int j = size_1; j <size_1+size_2 ; j++)   
    {
        list_3[j]=list_2[j-(size_1)];
    }
         
    int ak47;
    bool changed = true;
do
{
changed = false;
for (int j = 0; j < size_1+size_2-1; j++)
	if (list_3[j] > list_3[j+1])
	{
	   ak47=list_3[j];           //实现比较交换
       list_3[j]=list_3[j+1] ;
       list_3[j+1]=ak47;
	  changed = true;
	}
} 
while (changed);

for (int i = 0; i < size_1+size_2; i++)    //打印数组结果
{
    cout<<list_3[i]<<" ";
}

}

