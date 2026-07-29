#include<bits/stdc++.h>
using namespace std;

class DiscountCalculator {
     public:

    double calculate(string type,double amount){

        if(type=="Regular")
            cout<< amount*0.10;

        else if(type=="Premium")
            cout<< amount*0.20;

        return 0;
    }

};

int main(){
    DiscountCalculator cal=DiscountCalculator();

    cal.calculate("Regular",1000);

    return 0;
}