#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;///v�Ovector�̭���int
    v.push_back(10);///��10��i�h, v��1��
    v.push_back(11);///��11��i�h, v��2��
    v.push_back(15);///��15��i�h, v��3��
    for(int i=0;i<3;i++)
    {
        cout<<v[i]<<endl;
    }
}
