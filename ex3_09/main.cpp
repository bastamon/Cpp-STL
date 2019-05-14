#include <iostream>

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
    <endl;
    return 0;
}
