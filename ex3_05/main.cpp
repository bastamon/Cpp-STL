#include <iostream>
//编写程序,在程序中定义一个以数组为数据成员的类，并在类中重载运算符[]使其不仅可以使用类对象使用下表访问数组元素，而且还可以标出其下标值。需要注意的是，由于这是一个用于数组访问的下表运算符，故这个是双目运算符，其默认的参数为数组名，其默认的参数为数组名，另一个参数则是括号中的下标，它的语法形式为：```返回值类型 operator[](int i);```
using namespace std;
class someArray
{
    int a[3];
public:
    someArray(int i,int j,int k)
    {
        a[0]=i;
        a[1]=j;
        a[2]=k;
    }
    int &operator[](int i)
    {
        cout<<"�±�ֵΪ:"<<i<<endl;
        return a[i];
    }
};
int main()
{
    someArray ob(1,2,3);
    cout<<ob[2]<<endl;
    ob[2]=10;
    cout<<ob[2]<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
