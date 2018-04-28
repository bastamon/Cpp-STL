#include <iostream>

using namespace std;
template<typename T>class SharePtr;
//定义计数类模板
template<typename T> class Res_Ptr
{
private:
    T *res_p;
    int use_num;
    Res_Ptr(T *p):res_p(p),use_num(1)
    {
        cout<<"Res_Ptr构造函数"<<endl;

    }
    ~Res_Ptr()
    {
        delete res_p;
        cout<<"Res_Ptr析构函数"<<endl;
    }
    friend class SharePtr<T>;

};
//shareptr模版声明
template<typename T>class SharePtr
{
public:
    //构造函数
    SharePtr(T *p,T i):ptr(new Res_Ptr<T>(p)),val(i)
    {
        count<<"SharePtr构造函数"<<"use_num"<<ptr->use_num<<endl;
    }
    //复制构造函数
    SharePtr(const SharePtr &orig):ptr(orig.ptr),val(orig.val)
    {
        ++ptr->use_num;
        cout<<"SharePtr复制构造函数"<<"use_num="<<ptr->use<<endl;
    }
    //析构函数。如果技术为0，则删除Res_Ptr对象
    ~SharePtr()
    {

        cout<<"SharePtr析构函数"<<"use_num="<<ptr->use_num<<endl;
        if(--ptr->use_num==0)
            delete ptr;
    }
private:
    Res_Ptr<T>*ptr;
    T val;
}

int main()
{
    {
        SharePtr<int>hpa=SharePtr<int>(new int(42),100);
        {
            SharePtr<int>hpb(hpa);//复制构造一个指针对象
            SharePtr<int>hpc(hpb);//复制构造一个指针对象
            SharePtr<int>hpd=hpa;//复制构造一个指针对象
        };
        cout<<"内层括号结束"<<endl;
    }

    cout << "中层括号结束" << endl;
    return 0;
}
