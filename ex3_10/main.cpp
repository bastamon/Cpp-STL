#include <iostream>

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
