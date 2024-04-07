//
// Created by 86130 on 2024/4/7.
//
/*
 * 输入一个以#结束的字符串，本题要求滤去所有的非十六进制字符（不分大小写），
 * 组成一个新的表示十六进制数字的字符串，然后将其转换为十进制数后输出。
 * 如果在第一个十六进制字符之前存在字符“-”，则代表该数是负数。
 * */
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    int flag=1;
    int k=0;
    int i=0;
    int s=0;
    int a;
    char s1[200];
    int s2[200];
    while((s1[i]=getchar())!='#') i++;
    for(m=0;m<i;m++)
        if((s1[m]>='0'&&s1[m]<='9')||(s1[m]>='a'&&s1[m]<='f')||(s1[m]>='A'&&s1[m]<='F'))
        {
            for(n=0;n<m;n++)
                if(s1[n]=='-') flag=0;
            break;
        }
    for(m=0;m<i;m++)
        if((s1[m]>='0'&&s1[m]<='9')||(s1[m]>='a'&&s1[m]<='f')||(s1[m]>='A'&&s1[m]<='F'))
        {
            if(s1[m]>='a'&&s1[m]<='f') s2[k]=s1[m]-87;
            else if (s1[m]>='A'&&s1[m]<='F') s2[k]=s1[m]-55;
            else s2[k]=s1[m]-48;
            k++;
        }
    if(flag==0) printf("-");
    for(a=0;a<k;a++) s=s+s2[a]*pow(16,k-a-1);

    printf("%d",s);
    return 0;
}