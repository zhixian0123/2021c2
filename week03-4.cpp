#include <stdio.h>
char line[2000];
int main()
{
	int t=1;///一開始是火車頭,不用掛勾
	while(gets(line))///不定長度,用while
	{
		if(t>1) printf("\n");///後面的車廂,有掛勾
		printf("車廂%d讀到一筆資料哦\n", t);
		t++;
	}
	return 0;
}
