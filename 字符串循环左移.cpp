//
// Created by 86130 on 2024/4/7.
//
#include<stdio.h>
int main()
{
    int i;
    int k=0;
    int m,n,a,b;
    char s1[1000],s2[1000];
    while((s1[i]=getchar())!='\n')
        i++;
    scanf("%d",&n);
    if (n>=i) n=n-i;
    a=n;
    s1[i]='\0';
    for(a;s1[a]!='\0';a++)
    {
        s2[k]=s1[a];
        k++;
    }
    for(b=0;b<n;b++,k++) s2[k]=s1[b];
    for(m=0;m<i;m++) printf("%c",s2[m]);
    return 0;
}