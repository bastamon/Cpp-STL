#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>intVector;//定义向量容器
    vector<int>::iterator iter;//定义容器的迭代器
    //在如下循环中，使用vector成员函数push_back
    //向容器中输入10个随机数
    for(int i=0;i<10;i++)
        intVector.push_back((int)rand());
    //显示容器中的数据
    for(iter=intVector.begin();iter!=intVector.end();iter++)
        cout<<*iter<<"\t";
    cout<<endl;
    //排序
    sort(intVector.begin(),intVector.end(),greater<int>());
    for(iter=intVector.begin();iter!=intVector.end();iter++)
        cout<<*iter<<"\t";
    cout<<endl;
    return 0;
}
