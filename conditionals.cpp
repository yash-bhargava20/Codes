#include<iostream>
#include<math.h>
using namespace std;
int main(){
    /*int a=2;
    int b=a+1;
    if((a=3)==b){
        cout<<a;
    }
    else{
        cout<<a+1;
    }*/

    /*int n, sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;*/

    /*int n,count=0;
    cin>>n
    for(int i=1;i<=n;i++){
        if(n%i==0){
        count++;
        }
    }    
    if(count==2){
        cout<<"Number is Prime no.";
    }else{
        cout<<"Number is not a prime number.";
    }*/

    //Amstrong number in range 1to 1000;
    /*int n,m,arm,rem,t,digit,k;
    cout<<"Upper Limit:";
    cin>>n;
    cout<<"Lower Limit:";
    cin>>m;
    for(int i=n;i<=m;i++){
        t=i;
        digit=0;
       
        while(t>0){
            digit++;
            t=t/10;
        }
        k=i;
        arm=0;
        while(k>0){
        rem=k%10;
        arm=pow(rem,digit)+arm;
        k=k/10;
        }
        if(arm==i){
        cout<<arm <<" " ;
        }
    }*/

    //FACTORIAL of a number:
    /*int n,fac=1;
    cin>>n;
    while(n>0){
        fac=fac*n;
        n=n-1;
    }
    cout<<fac;*/

    //Leap year:
    /*int year;
    cin>>year;
    if((year%4==0)&&((year%100!=0)||(year%400==0))){
        cout<<"Leap year";
    }else{
        cout<<"Not a Leap year";
    }*/
    
    /*int x=0,y=1,z=0,n;
    cin>>n;
    for(int i=1;i<=n;i++){
    x=y;
    y=z;
    z=x+y;
    }
    cout<<z<<" ";*/

    //REverse a number:
    /*int n,r,rev=0;
    cin>>n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;*/

    /*int n,r,fact,sum=0;
    cin>>n;
    while(n>0){
        fact=1;
        r=n%10;
        while(r>0){
            fact=r*fact;
            r=r-1;
        }
        sum=sum+fact;
        n=n/10;
    }
    cout<<sum;*/
    
    //  Strong numbers:

    /*int n,r,fact,sum=0,k;
    cin>>n;
    for(int i=1;i<=n;i++){
        k=i;
        while(k>0){

        fact=1;
        r=k%10;
        while(r>0){

            fact=r*fact;
            r=r-1;
        }
        sum=sum+fact;
        k=k/10;
    }
    if(sum==i){
        cout<<i<< " ";

        }
     sum=0;   
    }*/

    /*int n,r,count =0;
    cin>>n;
    for(int i=1;i<=n;i++){
        r=n%i;
        if(r==0){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl;
    cout<<count<<endl;
    
    if(count % 2==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No";
    }*/
    
    //subtract the product and sum of digit

    /*int n,r,sum=0,prod=1,result;
    cin>>n;
    while(n>0){
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    result=prod-sum;
    cout<<result<<endl;*/

    /*int n,count =0;
    cin>>n;
    while(n>0){
        if(n & 1==1){
            count ++;
        }
        n=n>>1;
    }
    cout<<count<<endl;*/

}