#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nation[2001][80];///��a�W2000��,�C��80�r��
int compare(const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0;i<N;i++)///���D���X�� for�j��,�����D���X�� while�j��
	{
		scanf("%s", nation[i]);///�Ů��_�}
		char name [80];///�H�W,���Ů�b�̭�
		gets(name);///gets()��Ů�]�Y�i��
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
