#include <iostream>

using namespace std;

int main()
{
    //lambda���ʽ�������弰����
    [](int x){cout<<2*x<<endl;}(10);
    //�ȶ�������ٵ���
    auto f=[](int x){cout<<2*x<<endl;};
    f(10);
    //�з���ֵ��lambda����
    int a=[](int x)->int {return 2*x;}(10);
    cout <<a<< endl;
    return 0;
}
