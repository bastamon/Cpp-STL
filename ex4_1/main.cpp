#include <iostream>

using namespace std;
//����MyVector����ģ��
template<typename Ty>class MyVector
{
public:
    //��Ƕ���ͱ�
    typedef Ty value;
    typedef Ty* viter;
public:
    //���캯��
    MyVector(int nLen=0)
    :m_nLen(nLen),
    m_Data(NULL),
    finish(0)
    {
        if(nLen>0)
        {
            m_Data=new Ty[nLen];
            star=m_Data;
            end_of_element=nLen;
        }
    }
    //��������
    ~MyVector()
    {
        delete []m_Data;
    }
    //����β���������ݺ���
    void push_back(const value& x)
    {
        if(end_of_element!=finish)
        {
            *(star+finish)=x;
            ++finish;
        }else
        {
            cout<<"Խ��"<<endl;
        }

    }
    //������β��������ݵĺ���
    inline value pop_back()
    {
        --finish;
        return *(star+finish);
    }
    //����operator[]
    value& operator[](int n)
    {
        if (n==finish||n<finish)
            return *(star+n);
        else
            cout<<"err"<<endl;
    }
protected:
    viter m_Data;
    int m_nLen;
    viter star;
    int finish;
    int end_of_element;
};

int main()
{
    int x;
    //����int����myvector����v1
    MyVector<int>v1(10);
    //��v1β����������100
    v1.push_back(100);
    //��v1β����������200
    v1.push_back(200);
    //��v1β����������300
    v1.push_back(300);
    //��v1β���������
    x=v1.pop_back();
    cout << "x=" <<x<< endl;
    //ʹ���±귽ʽ�����������������
    cout<<v1[0]<<endl;
    cout<<v1[1]<<endl;
    cout<<v1[2]<<endl;
    return 0;
}
