//
// Created by 86130 on 2024/4/7.
//
#include <stdio.h>

char* StrInsert(char *dst, int idx, const char *src);

int main()
{
    char a[1024], b[1024];
    int i;
    gets(a);
    scanf("%d%*c", &i);
    gets(b);
    StrInsert(a, i, b);
    puts(a);
    return 0;
}

/* 你提交的代码将被嵌在这里 */
char* StrInsert(char *dst, int idx, const char *src)
{
    int lena = 0, lenb = 0 ;
    while(dst[lena]!='\0'){
        lena++;
    }
    if (lena<idx) return dst;
    while(src[lenb] != '\0'){
        lenb++;
    }
    for (int i = lena;i>= idx;i--){
        dst[i+lenb] = dst[i];
    }
    for (int i = idx;i<idx + lenb;i++){
        dst[i] = src[i - idx];
    }
    return dst;
}