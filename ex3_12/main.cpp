#include <iostream>

using namespace std;
//My_ptr��ģ������
template<class T> class My_ptr
{
private:
    T *_ptr;
public:
    My_ptr(T *p):_ptr(p)
    {
        cout<<"��ʱ�����Դ"<<endl;
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
        cout<<"��ǰ�ͷ���Դ"<<endl;
        delete _ptr;
    }

};
int main()
{
    int a=100;
    {
        My_ptr<int>p(&a);
        cout<<"��ӡ��Դ����"<<*p<<endl;
    }
    cout << "ָ�����p�������ѽ���" << endl;
    return 0;
}
