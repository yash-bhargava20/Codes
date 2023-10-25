#include<bits\stdc++.h>
using namespace std;
// same person exhibits different behavior in different situations. This is called polymorphism
//Types of Polymorphism:

//Compile-time Polymorphism -> A. Function Overloading  B.Operator overlading
//Runtime Polymorphism -> Virtual Function

//Functions can be overloaded by changing number of arguments or/and changing the type of arguments.
// In the function overloading function will call at the time of program compilation
class A{
    public:
    void sayHello(){
        cout<<"hello"<<endl;
    }
    void func(int x){
        cout<<x<<endl;
    }
    void sayHello(string name){
        cout<<name<<endl;
    }
    void func(double y){
        cout<<y;
    }
   

};
//Operator overloading means defining additional tasks to operators without changing its actual meaning.
// We do this by using operator function.
class C{
    private:
    int a,b;

    public:
    void multiply(int a,int b){
        cout<<a*b<<endl;
    }
    void showData(){
        cout<<a<<" "<<b<<endl;
    }
    C operator+(C &obj){
        C temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;

        return temp;
    }
    void operator() (){
        cout<<"hello"<<endl;
    }
    
};
//Runtime polymorphism
//Method Overridding
//occurs when a derived class has a definition for one of the member function of the base class.

class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog:public animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }

};
//virtual function 
class base{
    public:
    virtual void print(){
        cout<<"My name is yash"<<endl;
    }
};
class derived :public base{
    void print(){
        cout<<"print derived class"<<endl;
    }

};

int main(){
    
    // A obj;
    // obj.sayHello();
    // obj.func(10);
    // obj.func(13.25);
    // obj.sayHello("yash");

    C obj1,obj2,obj3;

    obj1.multiply(7,2);
    obj2.multiply(3,2);

    obj3=obj1+obj2;
    //obj3 = obj1.operator + (obj2);
    obj3.showData();
    obj1();

    Dog obj;
    animal d;
    d.speak();
    obj.speak();

    base* object;
    derived object2;
    object=&object2;
    
    //Virtual function 
    object->print();




    return 0;
}