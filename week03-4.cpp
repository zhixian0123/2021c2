#include <stdio.h>
char line[2000];
int main()
{
	int t=1;///�@�}�l�O�����Y,���α���
	while(gets(line))///���w����,��while
	{
		if(t>1) printf("\n");///�᭱�����[,������
		printf("���[%dŪ��@����Ʈ@\n", t);
		t++;
	}
	return 0;
}
