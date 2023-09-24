#include<bits\stdc++.h>
using namespace std;
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

}
int firstOcuu(int a[],int size,int target){
    int s=0,e=size-1,ans=0;

    int mid=s+(e-s)/2;

    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid]==target){
            ans = mid;
            e=mid-1;
        }
        else if(target>a[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }

    }
    return ans;

}
int lastOcuu(int a[],int size,int target){
    int s=0,e=size-1,ans=0;
    int mid=s+(e-s)/2;

    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid]==target){
            ans = mid;
            s=mid+1;
        }
        else if(target>a[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }

    }
    return ans;

}
int floorOfanelement(int a[],int size,int target){
    int s=0,e=size-1,ans=0;
    int mid=s+(e-s)/2;

    while(s<=e){
        mid=s+(e-s)/2;
        if(target>a[mid]){
            ans=a[mid];
            s=mid+1;
        }
        else {
            e=mid-1;
        }

    }
    return ans;


}
int ceilingOfanelement(int a[],int target,int size){
    int s=0,e=size-1,ans=0;
    int mid=s+(e-s)/2;
    while(s<e){
        mid=s+(e-s)/2;
        if(a[mid]<target)
        {
            ans=a[mid];
            s=mid+1;
            
        }else{
             e=mid-1; 
            
        }
    }
    return ans ;

}
int peakIndex(int a[],int size){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        mid=s+(e-s)/2;
        if(a[mid]<a[mid+1]){
            s=mid+1;
        }
        else if(a[mid]>a[mid +1]){
            e=mid;
        }
    }
    return a[s];
    
}
//search in sorted rotated array

int Search(vector<int>&arr,int k){
    int n=arr.size();
    int s=0,e=n-1,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        //left side 
        if(arr[s]<arr[mid]){
            if(arr[s]<=k && arr[mid]>k){
                e=mid-1;
            }else{
                s=mid+1;
            }
        //right side
        }else{
            if(arr[mid]<k && arr[e]>=k){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
    }
    return -1;
}

int squareRoot(int n){
    int s=0,e=n, ans=0,mid;
    while(s<=e){
        mid=(s+e)/2;
        if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }
        else
        e=mid-1;
    }
    return ans;
}
bool canWeplace(int stalls[],int mid,int cows,int n){
    int countCows=1, last=stalls[0];
 
    for(int i=1;i<n;i++){
      if(stalls[i]-last >= mid) {
        countCows++;
        last=stalls[i];
      } 
      if(countCows>=cows)
      return true;
    }
    return false;
}
int agressivecows(int stalls[],int cows,int n){

    sort(stalls,stalls+n);
    
    int s=1,e=stalls[n-1]-stalls[0];
    while(s<=e){
        int mid=(s+e)/2;
        if(canWeplace(stalls,mid,4,n)){
            s=mid+1;
        }
        else
        e=mid-1;
    }
    return e;

}
//book allocation 
bool isAllocationPossible(int a[],int n,int student,int maxpages){
    int stu=1,pages=0;
    for(int i=0;i<n;i++){
        if(a[i]>maxpages)
        return false;
        if(pages+a[i]>maxpages){
            stu++;
            if(stu>student) return false;
        }else
        pages=pages+a[i];
    }
    return true;
}
int findPages(int a[],int n,int student){
    int ans=0;
    sort(a,a+n);
    int s=a[0], e=accumulate(a,a+n,0);
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isAllocationPossible(a,n,student,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    /*int size;
    int a[]={0,1,2,2,4,5,5,5,8};
    size=sizeof(a)/sizeof(a[0]);
    printArray(a,size);
    cout<<endl;*/

    /*//First and last ocuurence:
    int first=firstOcuu(a,size,5);
    cout<<first<<endl;

    int last=lastOcuu(a,size,5);
    cout<<last<<endl;

    //Count ocuurence of target element:
    int count;
    count = (last-first)+1;
    cout<<"Total number of ocuurences: "<<count<<endl;*/

    //Floor of an element:
    /*int floor=floorOfanelement(a,size,6);
    cout<<"Floor of an element: "<<floor<<endl;

    int ceil=ceilingOfanelement(a,size,4);
    cout<<"ceil of an element:"<<ceil<<endl;*/
    
    //Peak index of an element:
    /*int a1[]={1,2,3,5,6,3,1,0};
    printArray(a1,8);
    cout<<endl;
    int peak=peakIndex(a1,8);
    cout<<peak<<endl;*/

    /*int sqrt=squareRoot(28);
    cout<<sqrt<<endl;*/

    /*int stalls[]={1,2,5,7,9,10};
    int result= agressivecows(stalls,4,6);
    cout<<result;*/

    /*vector<int>arr={4,5,6,7,8,10,1,2,3};
    int ans=Search(arr,10);
    cout<<ans;*/

    /*int a[]={12,34,67,90};
    int result=findPages(a,4,2 );
    cout<<result;*/
    return 0;

}
