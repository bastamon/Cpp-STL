#include <iostream>
//当用户从键盘输入一个处于15~20之间的数据时，显示器屏幕上显示该数据的2倍，否则显示该数据本身
using namespace std;

int main()
{
    int max=20;
    int min=15;
    int a;
    cout<<"please input data a=";
    cin>>a;
    cout<<[max,min](int x)->int
        {
            if(x<max&&x>min)
                return 2*x;
            else
                return x;

        }(a)
        <<endl;
    return 0;
}
