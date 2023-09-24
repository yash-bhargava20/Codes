#include<iostream>
using namespace std;
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

}
int binarySearch(int a[],int target){
    int size;
    int s=0,e=size-1,mid;
    int ans = 0;
    mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid]==target){
            return mid;
            
        }
        else if(target>a[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
       
    }
    return -1;

}
int main(){
    int size,target;
    cin>>size;
    cin>>target;
    int a[]={3,7,4,8,11,9,6};
    printArray(a,size);
    int result=binarySearch(a,target);
    cout<<endl;
    cout<<result;
    
    return 0;
}
