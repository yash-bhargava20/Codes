#include<bits\stdc++.h> 
using namespace std; 
//Inheritance is a feature or a process in which, new classes are created from the existing classes.
// The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. 
//Using inheritance, we have to write the functions only one time.
//Private data of parent class cannot be inherted.

class Human{
public:
    int height;
protected:
    int weight;
public:
    void setHeight(int Height){
        height=Height;
    }
    int getHeight(){
        return this->height;
    }
    void setWeight(int Weight){
        weight=Weight;
    }
    int setWeight(){
        return this->weight;
    }



};
class male: public Human{
    public:
    string name;
    void display(){
        cout<<"yash"<<endl;
    }

};
//single inheritence
class A{
    public:
    int a;
   
    public:
    void setA(){
        cin>>a;
    }
    
};
class B:public A{
    int b;
    public:
    void setB(){
        setA();
        cin>>b;
    }
    public:
        int calc(){
        int ans=a+b;
        return ans;
    }
  

};
//Multiple Inheritence
//where a class can inherit from more than one class.
class num1{
    public:
    int x;
    void getx(){
        cin>>x;
    }
};
class num2{
    public:
    int y;
    void gety(){
        cin>>y;
    }

};
class ans:public num1,public num2{
    public:
    int sum(){
        return x+y;
    }

};
//Multilevel Inheritence:
class student{
    public:
    string name="yash";
    void getdata(){
        cout<<name<<endl;
    }
};
//first sub_class derived from parent class.
class age:public student{
    public:
    void Age(){
        cout<<"age:"<<20<<endl;
    }


};
//second sub class derived from the derived base class.
class hobbies: public age{
    public:
    void Hobbies(){
    cout<<"reading books"<<endl;
    }

};
//Heriacle Inheritence:
// In this type of inheritance, more than one subclass is inherited from a single base class
class vehicle{
    public:
    vehicle(){
       cout<<"This is a vehicle"<<endl; 
    }
};
class Car : public vehicle { 
}; 

class Bus : public vehicle { 
}; 
  

int main(){
   // male obj;
    
    // obj.setHeight(175);
    // cout<<obj.getHeight()<<endl;

    // obj.setWeight(56);
    // cout<<obj.setWeight()<<endl;

    // cout<<obj.weight;
    
    // obj.display();

    // B result;
    // result.setA();
    // result.setB();
    // cout<<result.calc()<<endl;

    // ans obj;
    // obj.getx();
    // obj.gety();
    // cout<<obj.sum();


    //invoke the constructor of base classes.
    hobbies obj;
    obj.getdata();
    obj.Age();
    obj.Hobbies();

    Car obj1; 
    Bus obj2;
}