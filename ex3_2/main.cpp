#include <iostream>
//定义一个复数类，并已友元函数方式为其重载一个全局假发运算符，
//使他可以实现复数的加法运算

using namespace std;
//复数类
class complex
{
    private:
        double real,imag;
    public:
        //友元声明
        friend complex& operator+(const complex& c1,const complex& c2);
        complex(double r=0,double i=0)
        {
            real=r;
            imag=i;
        }
        void display_Clx();

};
void complex::display_Clx()
{
    if(imag>=0)
        cout<<real<<"+i"<<imag<<endl;
    else
        cout<<real<<"-i"<<-imag<<endl;

}

//重载的加法运算符
complex& operator+(const complex& c1,const complex&c2)
{
    complex c;
    c.real=c1.real+c2.real;
    c.imag=c1.imag+c2.imag;
    return c;
}

int main()
{
    cout << "Hello world!" << endl;
    complex c1(1,8),c2(3,-6),c3;
    c3=c1+c2;
    c3.display_Clx();
    return 0;
}
