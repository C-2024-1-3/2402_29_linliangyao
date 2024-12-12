#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"请输入数组元素个数"<<endl;
    cin>>a;
    cout<<"请输入数组元素"<<endl;
    int *p =new int[a];
    for (int i = 0; i < a; i++)
    {
        cin>>p[i];
    }

double ak47;
    bool changed = true;
do
{
changed = false;
for (int j = 0; j < a-1; j++)
	if (p[j] > p[j+1])
	{
	   ak47=p[j];           //实现比较交换
       p[j]=p[j+1] ;
       p[j+1]=ak47;
	  changed = true;
	}
} 
while (changed);
    
    for (int i = 0; i < a; i++)
    {
        cout<<p[i]<<" ";
    }
    
    delete []p;
    return 0;
}