#include<bits/stdc++.h>
using namespace std;

//Abstraction

//Abstraction means displaying only essential information and hiding the details. 
//Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 
//Types Abstraction:Data Abstraction, Control Abstraction


class promotion{

};
class Employee{

    private:
        string name;
        string company;
        int age;

    public:
        // string name;
        // string company;
        // int age;

    void IntroduceYourself(){
        cout<<name<<endl;
        cout<<company<<endl;
        cout<<age<<endl;
    }
    //Encapsulation

//Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
// In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.
//Property: Data protection and Data Hiding

    void setName(string Name){
        name=Name;
    }
    string getName(){
        return name;
    }
    void setCompany(string Company){
        this->company=Company;
    }
    string getCompany(){
        return company;
    }
    void setAge(int age){
      this->age =age;
    }
    int getAge(){
      return age;
    }

//Constructor
//It is a special method that is invoked automatically at the time of object creation.It construct the values i.e.
//provides data for the object.

    Employee(string Name,string Company,int Age){
        name=Name;
        company=Company;
        age=Age;
    }

};

int main(){
    //object
    
    Employee Employee1=Employee("Yash","Microsoft",20);
    Employee1.IntroduceYourself();
    cout<<endl;

    // Employee1.name="Yash";
    // cout<<Employee1.name<<endl;
    // Employee1.Company="Microsoft";
    // cout<< Employee1.Company<<endl;
    // Employee1.age=20;
    // cout<<Employee1.age<<endl;

    Employee1.setName("Siddharth");
    cout<<Employee1.getName()<<endl;

    Employee1.setCompany("Microsoft");
    cout<< Employee1.getCompany()<<endl;

    Employee1.setAge(25);
    cout<<Employee1.getAge()<<endl;

    





}
