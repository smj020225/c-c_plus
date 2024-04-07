//
// Created by 86130 on 2024/4/7.
//
//本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。
//
//注意：题目保证最大和最小值都是唯一的。
#include<stdio.h>
int main()
{
    int a[100];
    int i,n,t,k,q,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    max=0;
    min=0;
    for(i=1;i<n;i++)
        if(a[i]>a[max]) max=i;
    for(i=1;i<n;i++)
        if(a[i]<a[min]) min=i;
    k=a[0];a[0]=a[min];a[min]=k;
    t=a[n-1];a[n-1]=a[max];a[max]=t;
    for(i=0;i<n;i++) printf("%d",a[i]);
    return 0;
}