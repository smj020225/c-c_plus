//
// Created by 86130 on 2024/4/7.
//
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N==2) printf("1");
    int i=3;
    int num[1000]={2,2,2,2};
    while(N>num[i])
    {
        num[i+1]=num[i]+num[i-2];
        i++;
    }
    printf("%d",i-1);
    return 0;
}