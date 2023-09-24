#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    /*int size=5;
    int arr[5]={1,2,5,7,0};
    printArray(arr,5);
    cout<<endl;
    
    char ch[4]={'Y','A','S','H'};
    for(int i=0;i<4;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;*/

    int size,loc,x;
    int a[]={1,8,7,8,3,6};
    
    printArray(a,6);
    cout<<endl;
    
    cin>>x;
    cin>>loc;
    for(int i=size;i>=loc;i--){
        a[i+1]=a[i];
    }
    a[loc]=x;

    cout<<endl;

    for(int i=0;i<size+1;i++){
        cout<<a[i]<<" ";
    }
}

    
    
 