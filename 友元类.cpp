//
// Created by 86130 on 2024/4/7.
//
//
// Created by 86130 on 2024/3/24.
//
#include "iostream"

using namespace std;

class car;
class boat
{
    int weight;
public:
    boat(int c):weight(c){}
    friend class car;//友元类
    friend int totalweight(boat &a, car &b);
};
class car
{
    int weight;
public:
    car(int c):weight(c){}
    friend class boat;
    friend int totalweight(boat &a, car &b);
};

int main()
{
    int c,b;
    cin>>c>>b;
    car c1(c);
    boat b1(b);
    cout<<totalweight(b1,c1)<<endl;
    return 0;
}

int totalweight(boat &a, car &b){
    return a.weight+b.weight;
}