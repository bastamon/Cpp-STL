#include <iostream>

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
        cout<<"下标值为:"<<i<<endl;
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
