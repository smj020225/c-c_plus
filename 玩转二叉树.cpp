//
// Created by 86130 on 2024/4/7.
//
//给定一棵二叉树的中序遍历和前序遍历，请你先将树做个镜面反转，
//再输出反转后的层序遍历的序列。所谓镜面反转，是指将所有非叶结点的左右孩子对换。
//这里假设键值都是互不相等的正整数。
//7
//1 2 3 4 5 6 7
//4 1 3 2 6 5 7
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* build(int n,int *be,int *in)
{
    if(n<=0)
        return NULL;
    Node *T;
    T=new Node;
    T->data=be[0];
    T->left=NULL;
    T->right=NULL;
    int i;
    for(i=0;i<n;i++)
        if(be[0]==in[i])break;
    T->left=build(i,be+1,in);
    T->right=build(n-1-i,be+1+i,in+1+i);
    return T;
}

Node* LeftToRight(Node* BT){
    Node* BL=NULL;
    Node* BR=NULL;
    if(BT){
        if(BT->left){
            BL=BT->left;
            BT->left=NULL;
        }
        if(BT->right){
            BR=BT->right;
            BT->right=NULL;
        }
        BT->left=BR;
        BT->right=BL;
        LeftToRight(BT->left);
        LeftToRight(BT->right);
        return BT;
    }
}
void Show(Node* T,int n)
{
    queue<Node *> q;
    static int sum=n;
    q.push(T);
    while(!q.empty())
    {

        T=q.front();
        q.pop();
        n++;
        if(T!=NULL)
        {
            cout<<T->data;
            sum--;
            if(sum>0)
                cout<<" ";
            q.push(T->left);
            q.push(T->right);
        }
    }
}
int main()
{
    int n,in[30],be[30];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>in[i];
    for(int i=0;i<n;i++)
        cin>>be[i];
    Node *T=build(n,be,in);
    T = LeftToRight(T);
    Show(T,n);
    cin>>n;
    return 0;
}