#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v[100],i,s=0;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++)
    {
        s=(s|v[i]);

    }
    if((s&(1<<0))==0)
    {
        printf("Numarul este par\n");
    }
    else
    {
        printf("Numarul este impar\n");
    }
    system("pause");
    return 0;
}


