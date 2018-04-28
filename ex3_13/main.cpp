#include <iostream>

using namespace std;
template<typename T>class SharePtr;
//���������ģ��
template<typename T> class Res_Ptr
{
private:
    T *res_p;
    int use_num;
    Res_Ptr(T *p):res_p(p),use_num(1)
    {
        cout<<"Res_Ptr���캯��"<<endl;

    }
    ~Res_Ptr()
    {
        delete res_p;
        cout<<"Res_Ptr��������"<<endl;
    }
    friend class SharePtr<T>;

};
//shareptrģ������
template<typename T>class SharePtr
{
public:
    //���캯��
    SharePtr(T *p,T i):ptr(new Res_Ptr<T>(p)),val(i)
    {
        count<<"SharePtr���캯��"<<"use_num"<<ptr->use_num<<endl;
    }
    //���ƹ��캯��
    SharePtr(const SharePtr &orig):ptr(orig.ptr),val(orig.val)
    {
        ++ptr->use_num;
        cout<<"SharePtr���ƹ��캯��"<<"use_num="<<ptr->use<<endl;
    }
    //�����������������Ϊ0����ɾ��Res_Ptr����
    ~SharePtr()
    {

        cout<<"SharePtr��������"<<"use_num="<<ptr->use_num<<endl;
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
            SharePtr<int>hpb(hpa);//���ƹ���һ��ָ�����
            SharePtr<int>hpc(hpb);//���ƹ���һ��ָ�����
            SharePtr<int>hpd=hpa;//���ƹ���һ��ָ�����
        };
        cout<<"�ڲ����Ž���"<<endl;
    }

    cout << "�в����Ž���" << endl;
    return 0;
}
