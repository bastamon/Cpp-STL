#include <iostream>
//两个可以修改捕获变量的lambda表达式的示例程序
using namespace std;

int main()
{
    int max=20;
    int min=15;
    int a;
    cout<<"please input a=";
    cin>>a;
    cout<<[&max,min](int x)->int
    {
        if(x<max&&x>min)
        {
            max+=10;
        return max;
        }else
        {
            max+=100;
            return max;
        }
    }(a)
    <<endl;
    cout << "Hello world!" << endl;
    return 0;
}
