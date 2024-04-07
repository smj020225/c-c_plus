//
// Created by 86130 on 2024/4/7.
//
//
// Created by 86130 on 2024/3/24.
//
#include <iostream>
using namespace std;
class Donator
{
private:
    string name;//捐款人姓名
    float money; //捐款金额；单位：元
public:
    void setName(string _name);
    void setMoney(float _money);
    string getName(){return name;}
    float getMoney(){return money;}
    friend void read(Donator dt[],int n);
    static void printTotal(){
        cout<<"total:"<<totalMoney<<endl;
    }
    static double totalMoney;
    friend string getMaxName(Donator dt[], int n);//友元函数 在外部访问类中私有成员
};//静态变量的定义要放在类外完成初始化 注意格式
double Donator::totalMoney=0;

int main(){
    int n;
    cin>>n; ////输入本批次将参与的捐款人数
    cin>>Donator::totalMoney; //输入目前已有的捐款总额
    Donator::printTotal();
    Donator d[n];
    read(d,n);
    Donator::printTotal();
    cout<<getMaxName(d,n)<<endl;//输出本批次中捐款最高者姓名
    return 0;
}

void read(Donator dt[],int n){
    for (int i = 0; i < n; ++i) {
        string name;
        float money;
        cin>>name>>money;
        dt[i].setName(name);
        dt[i].setMoney(money);
        Donator::totalMoney+=dt[i].money;
    }
}

void Donator::setMoney(float _money) {
    this->money=_money;
}

void Donator::setName(string _name) {
    this->name=_name;
}

string getMaxName(Donator dt[], int n){
    int max=0;
    for (int i = 1; i < n; ++i) {
        if(dt[i].getMoney()>dt[max].getMoney())
            max=i;
    }
    return dt[max].getName();
}