#include<bits/stdc++.h>
using namespace std;

class Bird{
    public:
    virtual void eat(){
        cout<<"Eating"<<endl;
    }

    virtual ~Bird() = default;
};

class flybird{
    public:
    virtual void fly()=0;
    virtual ~flybird()=default;
};

class Sparrow:public Bird,flybird{
    public:
    void fly() override{
        cout<<"Sparrow can fly"<<endl;
    }
};

class Penguin:public Bird{
    
};

void makebirdeat(Bird &bird){
    bird.eat();
}

int main(){
    Sparrow sparrow;
    Penguin penguin;

    makebirdeat(sparrow);
    makebirdeat(penguin);

    return 0;

}