#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>intVector;//������������
    vector<int>::iterator iter;//���������ĵ�����
    //������ѭ���У�ʹ��vector��Ա����push_back
    //������������10�������
    for(int i=0;i<10;i++)
        intVector.push_back((int)rand());
    //��ʾ�����е�����
    for(iter=intVector.begin();iter!=intVector.end();iter++)
        cout<<*iter<<"\t";
    cout<<endl;
    //����
    sort(intVector.begin(),intVector.end(),greater<int>());
    for(iter=intVector.begin();iter!=intVector.end();iter++)
        cout<<*iter<<"\t";
    cout<<endl;
    return 0;
}
