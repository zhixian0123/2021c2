///Week09-2.cpp �q�j��p
#include <stdio.h>
int grade[10]={9,8,1,2,3,7,6,4,5,0};
int main()
{
    int N=10;
    while(1)///���Ӧh���F
    {
        int change=0;///�i�֤߰j��e,�ܰ�0�Ӧa��
        for(int i=0;i<N-1;i++)///�w�w�ƧǪk���֤�
        {
            if(grade[i]<grade[i+1])///�ϤF
            {
                int temp=grade[i];///�N�洫
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;///���ʨ�@�Ӧa��
            }
        }
        if(change==0) break;///�S���ʧ@,�N��������
        for(int i=0;i<N;i++) printf("%d ",grade[i]);
        printf("\n");
    }
}



