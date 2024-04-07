//
// Created by 86130 on 2024/4/7.
//
#include<stdio.h>
int main()
{
    struct book
    {char name[31];
        double price;
    }a[100];
    int n,m,i,max=0,min=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a[i].name);
        scanf("%lf",&a[i].price);
        getchar();
    }
    for(i=1;i<n;i++)
        if(a[i].price>a[max].price) max=i;
    for(i=1;i<n;i++)
        if(a[i].price<a[min].price) min=i;
    printf("%.2f, %s\n",a[max].price,a[max].name);
    printf("%.2f, %s",a[min].price,a[min].name);
}