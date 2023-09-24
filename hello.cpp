#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world"<<endl;
    int a=123;
    cout<< a <<endl;
    char b='a';
    cout<< b <<endl;
    double d =1.23;
    int size =sizeof(d);
    cout<<"Size of a is:"<<size <<endl;
    int S =sizeof(a);
    cout<<"Size of char a is "<<S<<endl;
    int c ='a';
    cout <<c <<endl;
    char t=41;
    cout<< t<<endl;
    int p;
    p=cin.get();
    cout<< "value of a :"<<p<<endl;

    int i=3;
    int j=2;
    bool first=(i==j);
    bool second={i<j};
    bool third=(i>j);
    cout<< first<<endl;
    cout<< second<<endl;
    cout<< third<<endl;

    int n,m;
    cin>>n;
    m=2*n;
    cout<<m<<endl;


}