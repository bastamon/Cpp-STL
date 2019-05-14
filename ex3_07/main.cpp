#include <iostream>
//lambda表达式与具有相同功能的仿函数的比较
using namespace std;
class functor
{
public:
    void operator()(int x)
    {
        cout<<2*x<<endl;
    }

};
int main()
{
    //仿函数定义及调用
    functor f;f(10);
    //lambda表达式声明定义及调用
    [](int x){cout<<2*x<<endl;}(10);
    cout << "Hello world!" << endl;
    return 0;
}
