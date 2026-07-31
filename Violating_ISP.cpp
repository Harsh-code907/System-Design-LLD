#include<bits/stdc++.h>
using namespace std;

class Machine{
    public:
    virtual void print()=0;
    virtual void scan()=0;
    virtual void fax()=0;

    virtual ~Machine()=default;
};

class SimplePrinter : public Machine{
    public:

    void print() override{
        cout<<"Printing"<<endl;
    }

    void scan() override{
        __throw_runtime_error("Scanner not avaliable");
    }

    void fax() override{
       __throw_runtime_error("Fax not avaliable");
    }
        
};

int main(){
    SimplePrinter s;
    s.fax();
    s.print();
    s.scan();

    return 0;
}