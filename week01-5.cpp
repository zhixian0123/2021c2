#include <stdio.h>
#include <string.h>
char line[1000]; ///�~���ŧi��,�|��l��0
int main()
{
    for(int k=0;k<4;k++)
    {
        scanf("%s", line);
        int ans=0;
        int N=strlen(line);
        for(int i=0;i<N;i++)
        {
            if(line[i] == '2') ans++;
        }
        printf("%d\n", ans);
    }
}
