#include <stdio.h>///舊
#include <iostream>///新
#include <vector>
char name[100][30];
int grade[100];
int main()
{
	int n;
	//scanf("%d", &n);
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>name[i]>>grade[i];///資料往右流到變數裡面
	}
	for(int i=0;i<n;i++)
	{
		std::cout<<name[i]<<std::endl;///end line表示跳行
	}         ///送到左邊 << 變數
}
