#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    int marks;

    public:
    Student(string n,int m){
        this->name=n;
        this->marks=m;
    }

    int getMarsk(){
        return marks;
    }

    string getName(){
        return name;
    }
};

class StudentRepository{
    public:
    void save(Student &student){
      cout<<"Saving "<<student.getName()<<" to Database"<<endl;
    }
};

class EmailService{
    public:
    void send(Student &student){
      cout<<"Sending Email To : "<<student.getName()<<endl;
    }
};

class PrintReport{
    public:
    void print(Student &student){
      cout<<"Printing "<<student.getName()<<" report"<<endl;
    }
};

int main(){
    Student S1=Student("Harsh",89);

    StudentRepository repo;
    EmailService email;
    PrintReport printer;

    repo.save(S1);
    email.send(S1);
    printer.print(S1);

    return 0;
}

