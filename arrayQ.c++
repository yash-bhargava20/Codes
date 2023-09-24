#include<bits/stdc++.h>
using namespace std;
void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int sumOfelement(int a[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+a[i];
    }
    return sum;
}

int max(int a[],int size){
    int max=a[0];
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max=a[i];
        }

    }
    return max;
}
int min(int a[],int size){
    int min=a[0];
    for(int i=0;i<size;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

//Linear search:
int linSearch(int a[],int target){
    int size;
    
    for(int i=0;i<size;i++){
        if(a[i]==target){
            return i;
        }
    }
    return 0;
}
int targetSum(int a[],int targetsum){
    int count ;
    int size;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]+a[j]==targetsum){
                count ++;
                
            }
        }
    }
    return count;
}
/*int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

    return a,b;
}*/
void updateArr(int a[],int size){
    int i=0,j=size-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

void pairSum(int a[],int target){
    int size;
    int s=0;
    int e=size-1;
    while(s<e){
        if(a[s]+a[e]==target){
            cout<<"("<<a[s]<<","<<a[e]<<")";
            s++;
        }
        else if(a[s]+a[e]>target)
        s++;
        else
        e--;

    }
}
void unique(int a[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                a[i]=a[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(a[i]>0){
            cout<<a[i]<<endl;
        }
    }
}
int secondlargest(int a[],int size){
    int largest=max(a,size);
    int secondmax=-1;
    for(int i=0;i<size;i++){
        if(a[i]>secondmax && a[i]!=largest){
            secondmax=a[i];
        }
    }
    return secondmax;

}
int secondSmallest(int a[],int size){
    int smallest=min(a,size);
    int secondmin=INT16_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<secondmin && a[i]!=smallest){
            secondmin=a[i];
        }
    }
    return secondmin;
}
void InsertElement(int a[],int pos,int x,int size){
    for (int i= size-1; i>= pos;i--){
        a[i+1] = a[i];
    }
    a[pos] = x;

}
void deleteElement(int a[],int pos,int n){
    for(int i=pos;i<n;i++){
        a[i]=a[i+1];
    }
}

   
int main(){
    /*int size;
    cin>>size;*/
    

    //Sum of element of an array;
    /*int a[]={1,2,9,6,5};
    printArray(a,size);
    cout<<endl;
    cout<<sumOfelement(a,size)<<endl;*/

    //Max and Min value of an array:
    /*int a[]={7,8,6,4,5,11};

    printArray(a,size);
    cout<<endl;
    cout<<"Maximum value is: "<<max(a,size)<<endl;
    cout<<"Minimum value is: "<<min(a,size)<<endl;*/

    //Reverse an array:
   /*int a[]={1,2,3,4,5,6};

    printArray(a,size);

    cout<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<a[i]<<" ";
    }*/

    //linear sarch:
    /*int target;
    cin>>target;
    int a[]={3,2,9,6,5,11,7};
    printArray(a,size);
    cout<<endl;
    cout<<linSearch(a,size)<<endl;*/

    /*int a[]={11,2,9,17,458,57};
    printArray(a,size);
    int count = 0,key = 0 ;
    for(int i=0;i<size;i++){
        
        if(a[i] % 2==0){
            count++;
        }else
        key ++;
    }
    cout<<endl;
    cout<<"No of even element :"<<count<<endl;
    cout<<"No of odd element :"<<key<<endl;*/

    /*int a[]={3,4,6,7,1,2};
    int targetsum;
    cout<<"Target sum:";
    cin>>targetsum;

    printArray(a,size);

    cout<<endl;
    cout<<targetSum(a,targetsum)<<endl;*/

    //Swap boundaries in array:

    /*int a[]={6,5,7,2,0,1};
    
    updateArr(a,size);
    printArray(a,size);*/

    /*int n;
    cin>>n;
    decTobin(n);*/

    //Duplicate element:
    /*int a[]={2,3,4,5,4,7,9};
    printArray(a,size);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                cout<<endl;
                cout<<a[i];
            }
        }
    }*/

    //Array intersection:
    /*int arr1[]={1,2,3,5,8,11,13};
    int arr2[]={0,2,5,7,9,10,11};
    
    for(int i=0;i<7;i++){
        int element=arr1[i];
        for(int j=0;j<7;j++){

            if(element<arr2[j])
            break;
            
            if(element == arr2[j]){
                cout<<arr2[j]<<" ";
                break;
            }
        }
    }*/
    
   /*int a[]={2,4,3,2,4,1,4};
    unique(a,6);
    printArray(a,n);*/

    /*int a[]={2,4,3,5,1,7};
    printArray(a,size);
    int result=secondlargest(a,size);
    int ans=secondSmallest(a,size);
    cout<<endl;
    cout<<result<<" "<<ans<<endl;*/

    /*int a[]={2,4,3,5,1,7};
    printArray(a,size);
    
    cout<<endl;
    int pos,x;
    cin>>pos;
    cin>>x;
    InsertElement(a,pos,x,size);
   // size++;
    cout<<"After insertion : ";
    for (int i = 0; i < size; i++)
        cout<<a[i]<<" ";*/
 
    /*int a[]={1,2,9,6,5,8};
    int i=0,j=1;
    while(i<j){
        swap(a[i],a[j]);
        i=i+2;
        j=j+2;
    }
    printArray(a,6);*/
    
   /*int a[]={1,2,3};
    int b[]={4,8,5,9};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int arr[n1+n2]={0};
    int i=0,j=0,k=0;
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }
    sort(arr,arr+k);

    for (int i=0; i < k; i++)
        cout << arr[i] << " ";*/

/*int n=5;
int a[]={0,5,4,7,0};
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[j],a[i]);
            j++;
        }
                
    }
        printArray(a,n);*/

    int n=5;
    int a[]={1,2,3,4,8};
    deleteElement(a,2,5);
    n--;
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}


    
    
    





   

