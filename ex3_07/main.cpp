#include <iostream>

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
    //�º������弰����
    functor f;f(10);
    //lambda���ʽ�������弰����
    [](int x){cout<<2*x<<endl;}(10);
    cout << "Hello world!" << endl;
    return 0;
}
