//
// Created by 86130 on 2024/4/7.
//
#include<stdio.h>
int main()
{
    int i,m,n,k,flag;
    char s1[80],s2[80];
    char c;
    while((s1[i]=getchar())!='\n') i++;
    s1[i]='\0';
    for(m=0;m<i;m++)
    {
        flag=1;
        for(n=m+1;n<i;n++)
            if(s1[m]==s1[n])
            {
                flag=0;break;
            }
        if(flag==1)
        {
            s2[k]=s1[m];k++;
        }
    }
    for(i=1;i<k;i++)
        for(m=0;m<k-i;m++)
            if(s2[m]>s2[m+1])
            {
                c=s2[m];s2[m]=s2[m+1];s2[m+1]=c;
            }
    for(i=0;i<k;i++) printf("%c",s2[i]);
    return 0;
}
