//
// Created by 86130 on 2024/4/7.
//
#include <stdio.h>

int main()
{
    int n,i,x;
    int a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);

    int j,num;
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            for(j=n;j>i;j--)
                a[j]=a[j-1];
            break;
        }
    }
    a[i]=x;
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);

}
