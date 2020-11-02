#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *namedb[] = {"abc", "bbc", "ccc", "Hello", "John", "Tome"};
    char name[100];
    int i;

    printf("请输入一行字符：");
    gets(name);

    for (i = 0; i < 6; i++)
    {
        if (!strcmp(name, namedb[i]))
        {
            printf("欢迎你，%s！", name);
            exit(0);
        }
    }
    printf("名字没有找到！");

    return 0;
}
