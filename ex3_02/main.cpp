#include <iostream>
//����һ�������࣬������Ԫ������ʽΪ������һ��ȫ�ּٷ��������
//ʹ������ʵ�ָ����ļӷ�����

using namespace std;
//������
class complex
{
    private:
        double real,imag;
    public:
        //��Ԫ����
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

//���صļӷ������
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
