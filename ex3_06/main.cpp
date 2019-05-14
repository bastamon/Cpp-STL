#include <iostream>
//函数对象作为函数参数的实例程序
using namespace std;
class Add
{
public:
    //运算符()重载
    int operator()(int a,int b)
    {
        return a+b;
    }
};
void fuction(int x,int y,Add add)
{
    cout<<add(x,y)<<endl;
}
int main()
{
    cout << "Hello world!" << endl;
    fuction(4,7,Add());
    return 0;
}
