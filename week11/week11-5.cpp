#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;///v是vector裡面裝int
    v.push_back(10);///把10放進去, v有1個
    v.push_back(11);///把11放進去, v有2個
    v.push_back(15);///把15放進去, v有3個
    for(int i=0;i<3;i++)
    {
        cout<<v[i]<<endl;
    }
}
