#include <stdio.h>
char nation[2000][80];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0;i<N;i++)///���D���X�� for�j��,�����D���X�� while�j��
	{
		scanf("%s", nation[i]);///�Ů��_�}
		char name[80];
		gets(name);
	}
	for(int i=0;i<N;i++)
	{
        printf("%s\n",nation[i]);
	}
}
