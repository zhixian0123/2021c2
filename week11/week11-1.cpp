#include <stdio.h>///��
#include <iostream>///�s
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
		std::cin>>name[i]>>grade[i];///��Ʃ��k�y���ܼƸ̭�
	}
	for(int i=0;i<n;i++)
	{
		std::cout<<name[i]<<std::endl;///end line��ܸ���
	}         ///�e�쥪�� << �ܼ�
}
