#include <iostream>
using namespace std;

class Student{
    string name;
    string education;
    int age;
    double mark;

    public:

    //constructor
       Student(string n,string e,int a,double m){
        this->name = n;
        this->education = e;
        this->age = a;
        this->mark = m;
    }

    void display(){
        cout<<"student name:"<<name<<endl;
        cout<<"stdent education :"<<education<<endl;
        cout<<"student age :"<<age<<endl;
        cout<<"student mark :"<<mark<<endl;
    }
};

int main(){
Student S1("rohit","mca",22,55.00);
S1.display();
    return 0;
}