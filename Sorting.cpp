#include<iostream>
using namespace std;
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
  int a[]={10,5,7,3,1,8};
  int size=sizeof(a)/sizeof(a[0]);

  //Selection sort:

  for(int i=0;i<size-1;i++){
    int minIndex=i;
    for(int j=i+1;j<size;j++){
        if(a[minIndex]>a[j]){
            minIndex=j;
        }
    }
    int temp;
    temp=a[minIndex];
    a[minIndex]=a[i];
    a[i]=temp;
  }

  //Bubble sort:
  for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){
        if(a[j]>a[j+1]){
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;

        }
    }
  }

  //Insertion sort:
  
  for(int i=1;i<size;i++){
    int temp=a[i];
    int j=i-1;
    while(j>=0){
        if(a[j]>temp){
            a[j+1]=a[j];
            j--;
        }else
        break;

        a[j+1]=temp;

    }  
}
printArray(a,size);

    return 0;
}



