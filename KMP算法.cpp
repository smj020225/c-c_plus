//
// Created by 86130 on 2024/4/7.
//
#include<iostream>
#include<cstring>
using namespace std;
int* findNext(string s) { //求解next数组
    int i = 0, k = -1;
    int len = s.length();
    int* next = new int[len];
    next[0] = -1;
    while (i < len) {
        while (k >= 0 && s[i] != s[k])
            k = next[k];
        i++, k++;
        if (i == len) break;
        if (s[i] == s[k]) next[i] = next[k];
        else next[i] = k;
    }
    return next;
}
int KMP(string s,string p) {  //KMP算法实现
    int i = 0, j = 0, plen = p.length(), slen = s.length();
    int* next = findNext(p);
    if (slen < plen) return (-1);
    while (i < plen && j < slen) {
        if (i == -1 || s[j] == p[i]) {
            i++, j++;
        }
        else {
            i = next[i];
        }
    }
    if (i >= plen) return(j - plen);
    else return (-1);
}
int main() {
    int i,j,n;
    string s, p[10];
    cin >> s;
    cin >> n;
    for (i = 0;i < n;i++) {
        cin >> p[i];
    }
    int result[10];
    for (i = 0;i < n;i++) {
        result[i] = KMP(s, p[i]);
    }
    for (i = 0;i < n;i++) {
        if (result[i] == -1) cout << "Not Found" << endl;
        else {
            for (j = result[i];j < s.length();j++) {
                cout << s[j];
            }
            cout << endl;
        }
    }
    return 0;
}