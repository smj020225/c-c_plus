//
// Created by 86130 on 2024/4/7.
//
#include <iostream>

using namespace std;

struct Node{
    int data;
    int add;
    int next_add;
    Node *next;
};

int main(){
    int head_num,n;
    cin>>head_num>>n;
    Node* head = new Node;
    Node* temp = head;
    // 读入
    for (int i = 0; i < n; ++i) {
        Node* q = new Node;
        cin>>temp->add>>temp->data>>temp->next_add;
        temp->next=q;
        temp=q;
    }
    // 排序
    temp=head;
    for (int i = 0; i < n; ++i) {
        Node *q = temp;
        while (true){
            if (q->add==head_num){
                swap(q->data,temp->data);
                swap(q->add,temp->add);
                swap(q->next_add,temp->next_add);
                head_num = temp->next_add;
                temp=temp->next;
                break;
            } else
                q = q->next;
        }
    }
    // 删除
    Node *del = new Node;
    Node *q = head->next;
    Node *p = del;
    temp = head;
    int num[n];
    num[0] = head->data;
    int k=1;
    for (int i = 1; i < n; ++i) {
        int flag = 1;
        int data = abs(temp->data);
        for (int j = 0; j < k; ++j) {
            if (num[j]==data){
                flag = 0;
                temp->next_add=q->next_add;
                temp->next=q->next;

                p->next_add = q->add;
                p->next=q;
                p=p->next;

                q = q->next;
                temp=temp->next;
            }
        }
        if (flag==1) {
            num[k]=data;
            k++;
            q = q->next;
            temp=temp->next;
        }
        cout<<temp->data<<" "<<q->data<<endl;
    }

    temp->next_add=-1;
    p->next_add=-1;
    temp=head;
    while (temp->next_add!=-1){
        if (temp->next_add==-1)
            cout<<temp->add<<" "<<temp->data<<" "<<-1<<endl;
        cout<<temp->add<<" "<<temp->data<<" "<<temp->next_add<<endl;
        temp=temp->next;
    }
    p=del->next;
    while (true){
        cout<<p->add<<" "<<p->data<<" "<<p->next_add<<endl;
        p=p->next;
        if(p->next_add==-1) {
            cout<<p->add<<" "<<p->data<<" "<<p->next_add<<endl;
            break;
        }
    }
    return 0;
}