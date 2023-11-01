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
    for(int i=start;s[i]!='\0';i++){
        cout<<s[i]<<endl;
    }
}

int main(){
    // int n=4;
    // char name[20];
    // char s[20]={'Y','A','S','H','\0'};
    // cout<<s<<endl;
    // cin>>name;
    // cout<<"My name is "<<name<<endl;
    // cout<<getlength(name)<<endl;

    // reverseString(s,n);

    // string s1 = "I will eat grapes";
    // string s2 = "lichi";
    // //position,size,target
    // s1.replace(11,6,s2);
    // cout<<s1;

    string str="abcdefabxyz";
    string str1="ab";

    auto found =str.find(str1);
    //cout<<found;
    if(found!=string::npos)
    cout<<found<<endl;

    found=str.find(str1,found+1);
    if (found != string::npos)
    cout<<found; 
    }