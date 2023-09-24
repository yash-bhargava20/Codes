#include<bits/stdc++.h>
using namespace std;
void towerOFhanoi(int n,char src,char help,char des){
    if(n==1){
    cout<<"transfer disk "<<n<<" from "<<src<<" to "<<des<<endl;
     return;
    }
   
    
    towerOFhanoi(n-1,src,des,help);
    cout<<"transfer disk "<<n<<" from "<<src<<" to "<<des<<endl;
    
    towerOFhanoi(n-1,help,src,des);
}
int main(){
int n=3;
towerOFhanoi(n,'S','H','D');
return 0;
}