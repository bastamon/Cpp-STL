#include <iostream>

using namespace std;
//My_ptr类模版声明
template<class T> class My_ptr
{
private:
    T *_ptr;
public:
    My_ptr(T *p):_ptr(p)
    {
        cout<<"生时获得资源"<<endl;
    }
    T& operator*()
    {
        return *_ptr;
    }
    T& operator->()
    {
        return _ptr;
    }
    ~My_ptr()
    {
        cout<<"死前释放资源"<<endl;
        delete _ptr;
    }

};
int main()
{
    int a=100;
    {
        My_ptr<int>p(&a);
        cout<<"打印资源数据"<<*p<<endl;
    }
    cout << "指针对象p生命期已结束" << endl;
    return 0;
}
