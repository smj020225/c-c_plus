//
// Created by 86130 on 2024/4/7.
//
//本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。
#include<stdio.h>
#include<math.h>
int main()
{
    double e,s=0,p=1;
    double i=1,j=1;
    scanf("%lf",&e);
    do
    {
        p=i/j;
        j=j+3;
        i=-i;
        s=s+p;
    }while(fabs(p)>e);
    printf("sum = %f",s);
//    printf("%lf %f",j,p);
}