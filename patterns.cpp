#include<iostream>
using namespace std;
int main(){
    int n=5;
   // cin>>n;
   //Pattern:1
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        
        cout<<endl;
    }*/
    //Pattern 2:
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }*/

    //Pattern 3:
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
          cout<<endl;
    }*/

    //Pattern 4:
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }*/

//Rhombus

   /*for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
                cout<<"* ";
        }

        for(int j=1;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=1,j=i;j<n-i+1,j<n;j++){
            cout<<j<<" ";
        }
        for(int j=i;j<n-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }*/

    //Pattern 6:
    /*
    int p=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<p<<" ";
            p++;
        }
        cout<<endl;
    }*/


    /*for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<< endl;

    }*/

    /*for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
        for(int j=1;j<i;j++){
            cout<<j<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=1;j<n-i;j++){
            cout<<j<<" ";
        }
        for(int j=n-i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }*/

    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1|| j==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }*/

    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1|| j==1|| i==j ||i==n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    } */

    
    /*for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(i==n||i==1|| j==1|| j==i){
            cout<<"* ";
        }else{
            cout<<"  ";
        }
        }
    cout<<endl;
    }*/

    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2== 0){
            cout<<"1 ";
        }else{
            cout<<"0 ";
        }
        }
        cout<<endl; 
    }*/
    /*for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"  ";
        }
        for(int j=1,p=i;j<=i;j++,p++){
            cout<<p<<" ";
    
        }
        for(int j=1,q=2*i-2;j<i;j++,q--){
            cout<<q<<" ";
        }
        cout<<endl;
    }*/
    

}
    
  


