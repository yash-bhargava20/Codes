#include<bits/stdc++.h>
using namespace std;
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void arrangeOddEven(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0 && i!=j){
            j++;
            swap(a[i],a[j]);
        }
    }
}
void segregate0nd1(int a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]==1){
        swap(a[s],a[e]);
        e--;
        }
        else
        s++;
    }
}
void segrgate0_1and2(int a[],int n){
    int s=0,e=n-1,mid=0;
    while(mid<=e){
        if(a[mid]==0){
        swap(a[s],a[mid]);
        s++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
        swap(a[mid],a[e]);
        }
    }
}

vector<int> pairSum(int n,vector<int>&a,int target){
    vector<int>ans;
    int s=0,e=n-1;
    sort(a.begin(),a.end());
    while(s<e){
        int sum=a[s]+a[e];
        if(sum==target){
           ans.push_back(s);
           ans.push_back(e);
            return ans;
        }
        else if(sum<target){
            s++;
        }
        else {
        e--;
        }
       
    }
    return {-1,-1};

}
void mergeSortedArray(vector<int>&a,vector<int>&b){
    vector<int>c;
    int i=0,j=0;
    int n1=a.size(),n2=b.size();
    while(i<=n1 && j<=n2){
        if(a[i]<=a[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(a[j]);
            j++;
        }
    }
    while(i<=n1)
    c.push_back(a[i++]);
    while(j<=n2)
    c.push_back(a[j++]);

    int n=n1+n2;
    for(int index=0;index<n;index++){
        cout<<c[index]<<" ";
    }

}
int maxAreaofWater(int a[],int n){
    int s=0,e=n-1,area;
    int maxarea=0;
    while(s<e){
        area=min(a[s],a[e])*(e-s);

        if(area>maxarea)
        maxarea=area;
        
        if(min(a[s],a[e])==a[s]){
            s++;
        }
        else
        e--;
    }
    return maxarea;
}
void rotate(vector<int>&a,int k){
    for(int i=0;i<k;i++){
        a.push_back(a[0]);
        a.erase(a.begin());
    }
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}
int maxSubarraysum(int a[],int n){
    int maximum =INT_MIN, sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(sum>maximum){
            maximum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maximum;
}
void nextPermutation(vector<int>&a){
    int n=a.size();
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }
    for(int j=n-1;j>index;j--){
        if(a[j]>a[index]){
            swap(a[index],a[j]);
            break;
        } 
    }
    reverse(a.begin()+index+1,a.end());

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int subarraySum(int a[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        int  sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            if(sum==k){
                count++;
            }
           
        }
    }
    return count;
}

int longestsubArray(int a[],int n){
    int count =0,ans=0;
    sort(a,a+n);
    vector<int>v;
    v.push_back(a[0]);
    //remove extra element
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            v.push_back(a[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i+1]-v[i]==1){
            count++;
        }
        else 
        count=1;

        ans=max(ans,count);
    }
    return ans;

}
int duplicate(int a[],int n){
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;

    }
    for(auto i:m){
        if(i.second>1){
            return i.first;
        }
    }
    return -1;
}


int main(){
    /*int n;
    cin>>n;*/
    
    //int a[]={0,1,0,1,0,2,0,1,2,2};
   /*int a[]={0,1,0,1,0,1,1};
    printArray(a,n);
    cout<<endl;
    segrgate0_1and2(a,n);
    //segregate0nd1(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
    
    /*vector<int>a={2,4,6,11,8,5};
    int target=10;
    int n=6;
    vector<int>ans=pairSum(n,a,target);
    cout<<ans[0]<<","<<ans[1];*/

    /*int a[]={3,1,2,4,3,1,5};
    cout<<maxAreaofWater(a,n);*/

    /*int a[]={6,1,5,2,3,0,4};
    printArray(a,n);
    cout<<endl;
    arrangeOddEven(a,n);
    printArray(a,n);*/
    
    /*vector<int>a={1,2,3,4,5};
    int k=2;
    rotate(a,k);*/

   /*int a[]={-1,-2,5,7,-3,2,1};
    printArray(a,n);
    cout<<endl;
    int maxi=maxSubarraysum(a,n);
    cout<<maxi;*/

    /*vector<int>a={2,4,1,7,5,0};
    nextPermutation(a);*/
    
    /*int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<subarraySum(a,n,-10);*/

    /*int a[]={1,1,2,3,5};
    cout<< "Length of the Longest contiguous subsequence is "<< longestsubArray(a, n);*/

    /*vector<int>a={1,2,3};
    vector<int>b={6,8,10,12};
    mergeSortedArray(a,b);*/
    int a[]={1,5,5,6,7,8};
    cout<<duplicate(a,6);
    

    return 0;
    

}