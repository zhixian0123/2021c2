#include <stdio.h>
int main()
{///檔案指標   開啟檔案   檔名      模式w+
    FILE * f = fopen("檔案輸出.txt", "w+");
    fprintf(f,"Hello我在這裡哦\n");
    printf("Hello World\n");
}
