//
// Created by 86130 on 2024/4/7.
//
//
// Created by 86130 on 2024/3/29.
//
#include<iostream>
using namespace std;
class Pig{
public:
    Pig(){
        cout<<"Pig 申请了空间..."<<endl;
    }
    virtual ~Pig(){//析构函数一般都写成虚函数哈
        cout<<"Pig 释放了空间..."<<endl;
    }
    virtual void climb(){
        cout<<"我只是个平凡的猪猪。"<<endl;
    }
};
class MagicPig:public Pig{
public:
    MagicPig():Pig(){
        cout<<"MagicPig 申请了空间..."<<endl;
    }
    ~MagicPig()//基类的虚函数到子类中也是虚函数 不需要再加virtual
    {    cout<<"MagicPig 释放了空间..."<<endl;  }
    void climb(){
        cout<<"我能上树了耶！"<<endl;
    }
};


int main(){
    Pig *p1 = new Pig;
    Pig *p2 = new MagicPig;
    cout << endl;
    p1->climb();
    p2->climb();
    cout << endl;
    delete p1;
    delete p2;
    return 0;
}