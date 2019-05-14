#include <iostream>

using namespace std;
//复数类
class complex
{
private:
    double m_real,m_imag;
public:
    complex(double r=0,double i=0)
    {
        m_real=r;
        m_imag=i;
    }
    void display_Clx();
    //运算符+重载声明，形参只有一个
    complex operator+(complex c2);
};

complex complex::operator+(complex c2)
{
    complex c;
    //由于成员函数所以可以直接访问c1的m_real和m_imag
    c.m_real=m_real+c2.m_real;
    c.m_imag=m_imag+c2.m_imag;
    return c;
}
void complex::display_Clx()
{
    if(m_imag>=0)
        cout<<m_real<<"+i"<<m_imag<<endl;
    else
        cout<<m_real<<"-i"<<-m_imag<<endl;

}
int main()
{
    cout << "Hello world!" << endl;
    complex c1(1,8),c2(3,-6),c3;
    c3=c1+c2;
    c3.display_Clx();
    return 0;
}
