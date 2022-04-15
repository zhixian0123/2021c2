#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nation[2001][80];///國家名2000筆,每筆80字母
int compare(const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0;i<N;i++)///知道有幾筆 for迴圈,不知道有幾筆 while迴圈
	{
		scanf("%s", nation[i]);///空格斷開
		char name [80];///人名,有空格在裡面
		gets(name);///gets()把空格也吃進來
	}
	qsort(nation,N,80,compare);
	nation[N][0]=0;
	int combo=1;
	for(int i=0;i<N;i++)
	{
		if(strcmp(nation[i],nation[i+1])==0)
		{
			combo++;
		}
		else
		{
			printf("%s %d\n", nation[i],combo);
			combo=1;
		}
	}
}
