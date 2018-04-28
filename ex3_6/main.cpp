#include <iostream>

using namespace std;
class Add
{
public:
    //ÔËËã·û()ÖØÔØ
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
