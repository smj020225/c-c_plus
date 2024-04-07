//
// Created by 86130 on 2024/4/7.
//
#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *str_cat( char *s, char *t )
{
    int n,i=0,j=0;
    while(s[i]!='\0') i++;
    while(t[j]!='\0') j++;
    for(n=i;n<i+j+1;n++) s[n]=t[n-i];
    return s;
}