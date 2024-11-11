#include<iostream>
using namespace std;
int main()
{
    char ab,cd;
    int ef;
    cout<<"请输入一个字符"<<endl;
    cin>>ab;
    
    if (int(ab)>=97 && int(ab)<=122 )
        {
            ef=int(ab)+32;
            cd=ef;
            cout<<char(cd)<<endl;
        }
    else
        {
            cout<<int(ab)+1<<endl;
        }
    
    return 0;
}
