#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    vector<int>::iterator v1_Iter, v2_Iter,v3_Iter,v4_Iter,v5_iter,v6_Iter;
    vector<int>v1(3);
    cout<<"v1=";
    for(v1_Iter=v1.begin();v1_Iter!=v1.end();v1_Iter++)
        cout<<""<<*v1_Iter;
    cout<<endl;
    vector<int>v2(5,2);
    cout<<"v2=";
    for(v2_Iter=v2.begin();v2_Iter!=v2.end();v2_Iter++)
         cout<<""<<*v2_Iter;
    cout<<endl;
    vector<int>v3(v2);
    cout<<"v3=";
    for(v3_Iter=v3.begin();v3_Iter!=v3.end();v3_Iter++)
        cout<<""<<*v3_Iter;
    cout<<endl;
    vector<int>v4(v2.begin()+1,v2.begin()+3);
    cout<<"v4=";
    for(v4_Iter=v4.begin();v4_Iter!=v4.end();v4_Iter++)
        cout<<""<<*v4_Iter;
    cout<<endl;
    return 0;

}
