#include <iostream>
using namespace std;


class newclass {
    public:
    
    void func1(){
        cout << "hi1";
    }
    void func2(){
        cout << "hi2";
    }
    void func3();
    int money(int manymoney);
};

int newclass::money(int manymoney){
    return manymoney*manymoney;
}

void newclass::func3(){
    cout << "bruh hi";
}

int main(){
    newclass Myclass;
    cout << Myclass.money(87);
    Myclass.func1();
    Myclass.func2();
    Myclass.func3();
    return 0;
}




