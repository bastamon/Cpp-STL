#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>v{10,3,5,8,2,6,7,9,34,23};
    for_each(v.begin(),v.end(),[](int n){cout<<n<<"";});

    cout << "Hello world!" << endl;
    return 0;
}
