#include "mytriangle.h"
#include <cmath>

/*这是依靠头文件而写的.cpp文件*/

 bool is_valid(double side1,double side2,double side3)   //用于判断输入合法性的函数
 {
        if (side1+side2<=side3||side2+side3<=side1||side1+side3<=side2)
        {
            return false;/* code */
        }
        else
        return true; 
 };

 double area(double side1,double side2, double side3)   
 {
        double s=(side1+side2+side3)/2;                 //用于计算三角形边长的函数
        double sp=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return sp;
 };
