#include <stdio.h>
int a[10]={9,8,7, 1,2,3, 6,5,4, 0};
int main()
{
    for(int k=0;k<10-1;k++)///����i
    {
        for(int i=0;i<10-1;i++)///�k��j
        {
            if(a[i]>a[i+1])///�j�p����,�洫
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++) printf("%d ", a[i]);
        printf("\n");
    }
}
