//
// Created by 86130 on 2024/4/7.
//
#include<stdio.h>
int main()
{
    int a[10];
    int n,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];a[j]=a[j+1];a[j+1]=temp;
            }
        }
    for(i=0;i<n-1;i++) printf("%d ",a[i]);
    printf("%d",a[i]);
}