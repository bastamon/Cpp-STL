#include <iostream>
//多种lambda表达式调用实例程序
using namespace std;

int main()
{
    //lambda表达式声明定义及调用
    [](int x){cout<<2*x<<endl;}(10);
    //先定义对象再调用
    auto f=[](int x){cout<<2*x<<endl;};
    f(10);
    //有返回值的lambda调用
    int a=[](int x)->int {return 2*x;}(10);
    cout <<a<< endl;
    return 0;
}
