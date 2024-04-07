//
// Created by 86130 on 2024/4/7.
//
#include<stdio.h>
struct student
{char num[10];
    char name[11];
    int s1;
    int s2;
    int s3;}a[100];
int main()
{
    int i,n,sum,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d %d %d",a[i].num,a[i].name,&a[i].s1,&a[i].s2,&a[i].s3);
    }
    sum=a[0].s1+a[0].s2+a[0].s3;
    for(i=1;i<n;i++)
        if(sum<a[i].s1+a[i].s2+a[i].s3)
        {
            sum=a[i].s1+a[i].s2+a[i].s3;
            p=i;
        }
    printf("%s %s %d",a[p].name,a[p].num,sum);


}