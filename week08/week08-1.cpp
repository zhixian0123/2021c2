#include <stdio.h>
char nation[2000][80];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0;i<N;i++)///知道有幾筆 for迴圈,不知道有幾筆 while迴圈
	{
		scanf("%s", nation[i]);///空格斷開
		char name[80];
		gets(name);
	}
	for(int i=0;i<N;i++)
	{
        printf("%s\n",nation[i]);
	}
}
