///scanf()�令 fscanf(fin, )
///�ϥΪ���class
#include <stdio.h>
class Record
{
    public:///���}�����,�i�H�Q�O�Hmain()�ϥ�
    char name[30];
    int grade;
};
Record student[100];///��100���ǥͪ����
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    for(int i=0;i<N;i++)
    {
        fscanf(fin,"%s %d", student[i].name, &student[i].grade);
    }
    for(int k=0;k<N-1;k++)
    {
        for(int i=0;i<N-1;i++)
        {
            if(student[i].grade<student[i+1].grade)
            {
                Record temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%s %d\n", student[i].name, student[i].grade);
    }
}


