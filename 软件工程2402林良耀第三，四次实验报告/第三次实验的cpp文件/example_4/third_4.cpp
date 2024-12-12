#include <iostream>
#include "mytriangle.h"
#include <cmath>
using namespace std;

/*
选择了实验四进行探究，
这是主函数文件
*/

int main()
{
    
    double side1,side2,side3;
    cout<<"请输入三角形的三条边"<<endl;
    cin>>side1>>side2>>side3;
    if (is_valid(side1, side2, side3))
    {
      cout<<"三角形的面积="<<area( side1, side2, side3)<<endl;
    }
    else
    cout<<"输入的数据有错误"<<endl;
    return 0;
}


//注意每个文件都要编译，而这需要更改tasks.json才能做到
//本代码已被证实可运行，勿修改