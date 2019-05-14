#include <iostream>

using namespace std;
class Test
{
public:
    void operator++()
    {
        cout<<"this is a prepositive add operator"<<endl;

    }
    void operator++(int)
    {
        cout<<"this is a postposition add operator"<<endl;
    }
};

int main()
{
    //cout << "Hello world!" << endl;
    Test test;
    test++;
    ++test;
    return 0;
}
