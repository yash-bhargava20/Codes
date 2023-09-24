#include<bits\stdc++.h>
using namespace std;

int main(){
int n=5,n1=6,count1=0,count2=0;

int a[]={1996,2000,2004,2009,2012};
int a1[]={2000,1020,1010,3000,2012,2016};
for(int i=0;i<n;i++){
    if((a[i] % 4==0 &&a[i] % 100!=0)||(a[i] % 400==0 && a[i] % 100==0 )){
        cout<<"leap year: "<<a[i]<<" "<<endl;
        count1++;
    }
    
}
cout<<endl;
for(int i=0;i<n1;i++){
    if((a1[i] % 4==0 && a1[i] % 100!=0)||(a1[i] % 400==0 && a1[i] % 100==0 )){
        cout<<"leap year: "<<a1[i]<<" "<<endl;
    }
        count2++;
    }
    

cout<<endl;
cout<<"Difference :";
int result =count2-count1;
cout<<result;


}