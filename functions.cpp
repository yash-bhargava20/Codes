#include<iostream>
#include<math.h>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    return sum;
}
float prod(float c,float d){
    float prod =c*d;
    return prod;
}
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
     ans=ans*a;   
    }
    return ans;
}
bool evenOdd(int a){
    if(a&1){
        return false;
    }else{
        return true;
    }
}
//1:prime
//0:not a prime 
bool primeNumber(int n){
    if(n==0||n==1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
        return 1;
}
int factorial(int n){
    int fact=1;
    while(n>0){
        fact=fact*n;
        n=n-1;
    }
    return fact;
}
int nCr(int n,int r){
    int result=factorial(n)/(factorial(n-r)*factorial(r));

    return result;
}
int reverse(int n){
    int rev=0,r;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;   
    }
    return rev; 
    
}
bool palindrom(int n){
    
    if(n==reverse(n)){
        return true;
    }else
    return false;
    
}

/*int decimalTobinary(int n){
    while(n>0){
        int r;
        r=n%2;

    }


}*/


int main(){
    /*float c,d;
    cin>>c;
    cin>>d;

    float result = prod(c,d);
    cout<<result<<endl;*/

   /*int a,b;
    cin>> a >> b;
    int result=power(a,b);
    cout<<result<<endl;*/

    /*int a;
    cin>>a;
    if(evenOdd(a)){
        cout<<"Number is even"<<endl;
    }else
    cout<<"Number is odd"<<endl;*/ 

    /*int n;
    cin>>n;
    if(primeNumber(n)){
        cout<<"Number is a prime "<<endl;
    }else{
        cout<<"Number is not prime"<<endl;
    }*/
    /*int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;*/

    /*int n;
    cin >>n;
    cout<<reverse(n)<<endl;
    if(palindrom(n)){
        cout<<"Yes"<<endl;
        
    }else{
        cout<<"no"<<endl;
    }*/


    //Pascal triangle; 
    int n=4;
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }


}

