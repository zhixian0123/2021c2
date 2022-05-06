#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std;
int main()
{
	int n;
	///scanf("%d", &n);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name[i]>>grade[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<name[i]<<std::endl;
	}
}
