#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,max,min,pos;
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=a[0];pos=0;
    for(i=1;i<=9;i++)
    {
        if(max<a[i]){max=a[i];pos=i;}
    }printf("max=%d, pos=%d\n",max,pos);
    min=a[0];pos=0;
    for(i=1;i<=9;i++)
    {
        if(min>a[i]){min=a[i];pos=i;}
    }printf("min=%d, pos=%d\n",min,pos);
}
