#include<bits/stdc++.h>
using namespace std;

class printable{
    public:
    virtual void print()=0;
    virtual ~printable()=default;
};

class scanable{
    public:
    virtual void scan()=0;
    virtual ~scanable()=default;
};

class faxable{
    public:
    virtual void fax()=0;
    virtual ~faxable()=default;
};

//Interface with classes which are used or required
class Simpleprinter : public printable{
    public:
    
    void print() override{
        cout<<"Printing"<<endl;
    }
};


//Interface class only with the classes which are used or required
class AdvancePrinter : public printable,public scanable,public faxable{
    public:
    void print() override{
        cout<<"Printing"<<endl;
    }

    void scan() override{
        cout<<"Scanning"<<endl;
    }

    void fax() override{
        cout<<"Faxing"<<endl;
    }
};


int main(){

    Simpleprinter sp;
    AdvancePrinter ap;

    sp.print();
    ap.print();
    ap.scan();
    ap.fax();

    return 0;

}
