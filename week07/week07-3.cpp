#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h>  //strcmp()
char line[1000][20];
int compare(const void*p1,const void*p2)
{		//�O�@�����  //����   //���O�S���w
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d\n", &N);
	for(int i=0;i<N;i++)
	{
		scanf("%s", line[i]);
	}
	qsort(line,N,20,compare);
	for(int i=0;i<N;i++)
	{
		printf("%s\n", line[i]);
	}
}
