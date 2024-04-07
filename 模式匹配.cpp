//
// Created by 86130 on 2024/4/7.
//
#include <bits/stdc++.h>
using namespace std;

/* s为主串，t为模式串。
 * 函数返回t在s中第一次出现的位置。
 */
int BF(string s, string t);

int main(int argc, char const *argv[])
{
    string s, t;
    getline(cin, s);    //输入主串
    getline(cin, t);    //输入模式串
    int pos = BF(s, t);    //搜索
    cout << pos << endl;//输出模式串在主串中第一次出现的位置
    return 0;
}

/* 请在这里填写答案 */
#include<vector>
vector<int>getNext(const string&str)
{
    vector<int>next(str.size());
    next[0]=-1;
    for(int i=1,j=-1;i<str.size();i++){
        while(j!=-1&&str[i]!=str[j+1]){
            j=next[j];
        }if(str[i]==str[j+1]){
            j++;
        }next[i]=j;
    }return next;
}
int BF(string strOne,string strTwo){
    vector<int>strTwoNext=getNext(strTwo);
    for(int i=0,j=-1;i<strOne.size();i++){
        while(j!=-1&&strOne[i]!=strTwo[j+1]){
            j=strTwoNext[j];
        }if(strOne[i]==strTwo[j+1])j++;
        if(j==strTwo.size()-1){
            return i-strTwo.size()+1;
        }
    }return -1;
}
