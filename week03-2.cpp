///Week03-2.cpp step02-1 �� C Tutor �]��!
/// https://pythontutor.com/c.html#mode=edit
#include <stdio.h>
#include <string.h>
char line[15]="123454321";
char *p1, *p2;///�D�D: pointer����,����A�n�ݪ��a��
int palindrome()
{
    int N=strlen(line);
    for(int i=0; i<N; i++){
        p1 = & line[i]; ///�D�D: pointer���� &����ܼƪ�address��}
        p2 = & line[N-1-i]; ///�D�D: pointer���� &����ܼƪ�address��}
        if( line[i] != line[N-1-i] ) return 0;//bad!!!
    }
    return 1;
}
int main()
{
    ///while( scanf("%s", line)==1 ){//�W�g��week02-1 //���n��while��scanf()
        int p = palindrome();
        if(p==1) printf("%s -- is a palindrome.\n\n",line);
        if(p==0) printf("%s -- is not a palindrome.\n\n",line);
    ///}//�W�g��week02-1
    return 0;
}
