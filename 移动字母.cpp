//
// Created by 86130 on 2024/4/7.
//
#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void Shift( char s[] )
{
    int a,i;
    a=strlen(s);
    char b[a];
    for (i=3;i<a;i++) b[i-3]=s[i];
    for(i=0;i<3;i++) b[a+i-3]=s[i];
    for(i=0;i<a;i++) s[i]=b[i];
}