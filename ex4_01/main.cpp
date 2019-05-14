#include <iostream>

//向量vector仿真MyVector
//容器MyVector类模板
//对上面的代码进行整理以形成完整的MyVector，然后编写一个测试程序测试它

using namespace std;
//向量MyVector的类模板
template<typename Ty>class MyVector
{
public:
    //内嵌类型表
    typedef Ty value;
    typedef Ty* viter;
public:
    //构造函数
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
    //析构函数
    ~MyVector()
    {
        delete []m_Data;
    }
    //数组尾部输入数据函数
    void push_back(const value& x)
    {
        if(end_of_element!=finish)
        {
            *(star+finish)=x;
            ++finish;
        }else
        {
            cout<<"越界"<<endl;
        }

    }
    //自数组尾部输出数据的函数
    inline value pop_back()
    {
        --finish;
        return *(star+finish);
    }
    //重载operator[]
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
    //定义int类型myvector对象v1
    MyVector<int>v1(10);
    //自v1尾部输入数据100
    v1.push_back(100);
    //自v1尾部输入数据200
    v1.push_back(200);
    //自v1尾部输入数据300
    v1.push_back(300);
    //自v1尾部输出数据
    x=v1.pop_back();
    cout << "x=" <<x<< endl;
    //使用下标方式随机访问向量中数据
    cout<<v1[0]<<endl;
    cout<<v1[1]<<endl;
    cout<<v1[2]<<endl;
    return 0;
}
