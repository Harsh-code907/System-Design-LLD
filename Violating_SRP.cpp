#include<bits/stdc++.h>
using namespace std;


class Student{
    private:
    string name;
    int marks;

    public:
    Student(string m,int n){
        this->name=m;
        this->marks=n;
    }

    void calPercentage(){
      cout<<"Percentage : "<<marks<<endl;
    }

    void saveToDB(){
        cout<<"Saving student to DB...."<<endl;
    }

    void sendEmail(){
        cout<<"Sending Email..."<<endl;
    }

    void printReport(){
       cout<<"Printing Report..."<<endl;
    }
};


int main(){
    Student s1=Student("Harsh",98);
    s1.calPercentage();
    s1.saveToDB();
    s1.sendEmail();
    s1.printReport();
    return 0;
}