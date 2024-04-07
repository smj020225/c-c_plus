//
// Created by 86130 on 2024/4/7.
//
//
// Created by 86130 on 2024/3/29.
//
#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    Person(string nam,char s,int a){
        name=nam;
        sex=s;
        age=a;
    }
protected:
    string name;
    char sex;
    int age;
};
//定义类Teacher
class Teacher: virtual public Person{
public:
    Teacher(string nam,char s,int a,string t):Person(nam,s,a){
        title=t;
    }
protected:
    string title;
};

class Student: virtual public Person{
public:
    Student(string nam,char s,int a,float sco):Person(nam,s,a),score(sco){}
protected:
    float score;
};

class Graduate: public Teacher, public Student//爷爷与爸爸之间的继承需要虚继承，孙子这里就不用虚继承了
{
    double wages;
public:
    Graduate(string n, char s, int a,  string t, float sc,double w):Person(n,s,a),Teacher(n,s,a,t),Student(n,s,a,sc),wages(w){
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"sex:"<<sex<<endl;
        cout<<"score:"<<score<<endl;
        cout<<"title:"<<title<<endl;
        cout<<"wages:"<<wages<<endl;
    }
};


int main( )
{
    Graduate grad1("Wang-li",'f',24,"assistant",89.5,1234.5);
    grad1.show( );
    return 0;
}