#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *namedb[] = {"abc", "bbc", "ccc", "Hello", "John", "Tome"};
    char name[100];
    int i;

    printf("������һ���ַ���");
    gets(name);

    for (i = 0; i < 6; i++)
    {
        if (!strcmp(name, namedb[i]))
        {
            printf("��ӭ�㣬%s��", name);
            exit(0);
        }
    }
    printf("����û���ҵ���");

    return 0;
}
