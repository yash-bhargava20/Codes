#include<bits/stdc++.h>
using namespace std;
int getlength(char name[]){
    int count =0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
}
void reverseString(char s[],int n){
    int start=0,end=n-1;
    while(start<end){
        swap(s[start++],s[end--]);  
    }
}
int main(){
    int n=4;
    char name[20];
    char s[20]={'Y','A','S','H','\0'};
    cout<<s<<endl;
    cin>>name;
    cout<<"My name is "<<name<<endl;
    cout<<getlength(name)<<endl;
    reverseString(s,n);
}