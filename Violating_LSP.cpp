#include<bits/stdc++.h>
using namespace std;

class Bird{
    public:
    virtual void fly(){
        cout<<"Bird can fly"<<endl;
    }
};

class Sparrow:public Bird{
    public:
    void fly() override{
        cout<<"Sparrow can fly"<<endl;
    }
};

class Penguin:public Bird{
    public:
    void fly() override{
        __throw_runtime_error("Penguin cannot fly");
    }
};

void makebirdfly(Bird &bird){
    bird.fly();
}

int main(){
    Sparrow sparrow;
    Penguin penguin;

    makebirdfly(sparrow);
    makebirdfly(penguin);

    return 0;

}