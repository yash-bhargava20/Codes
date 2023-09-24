#include<bits\stdc++.h>
using namespace std;
void numbers(int i,int n){
    if(i>n)
    return;
    cout<<i<<endl;
    numbers(i+1,n);
}
void printnum(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printnum(n-1);

}
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int calcuPower(int x,int n){
    if(n==0)
    return 1;
    if(x==0)
    return 0;

    int ans=x*calcuPower(x,n-1);
    return ans;
}
int sumOfdigits(int n){
    if(n==0)
    return 0;
    return n%10+sumOfdigits(n/10);
}
int fibb(int n){
    if(n==0)
    return 0;

    else if(n==1)
    return 1;

    else{
        return fibb(n-1)+fibb(n-2);
    }
}

void checkPalindrome(int i,string str){
    
    if(i>str.length()-1)
    return;

        if(str[i]!=str[str.length()-i-1]){
        cout<<"no";
        }
        else{
        cout<<"yes";
        }
    
    checkPalindrome(i+1,str);
}
void digitsToWords(string s[],int n){
    if(n==0)
    return;

    int digit=n%10;
    n=n/10;

    digitsToWords(s,n);
    cout<<s[digit]<<" ";
}
int sumOfElements(int a[],int n){
    if(n==0)
    return -1;
    int sum=a[0] + sumOfElements(a+1,n-1);
    return sum;

}
void revArray(int a[],int i,int j){
    if(i>j)
    return ;
    swap(a[i],a[j]);
    i++;
    j--;
    revArray(a,i,j); 

}
bool recursionLS(int a[],int n,int k){
    if(n==0)
    return false;

    if(a[0]==k)
    return true;
    else 
    return  (a+1,n-1,k);

}
int recursionBS(int a[],int k,int s,int e){
    if(s>e){
        return -1;
    }
    int m=s+(e-s)/2;
    if(a[m]==k){
        return m;
    }

    if(a[s]<=k && k<=a[m]){
        return recursionBS(a,k,s,m-1);
    }else
        return recursionBS(a,k,m+1,e);

    if(k>=a[m] && k<=a[e]){
        return recursionBS(a,k,m+1,e);
    }else{
        return recursionBS(a,k,s,m-1);
    }
}
void revString(string& str,int i,int j){
    if(i>j)
    return;
    swap(str[i],str[j]);
    i++;
    j--;
    revString(str,i,j);

} 
void merge(vector<int>&a,int s,int mid,int e){
    vector<int>temp;

    int left=s;
    int right=mid+1;

    while(left<=mid && right<=e){
        if( a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=e){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=s;i<=e;i++){
        a[i]=temp[i-s];
    }
}
void mergeSort(vector<int>&a,int s,int e){
    if(s>=e)
    return ;

    int mid=s+(e-s)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,mid,e);

}
int divide(int a[],int s,int e){
    int pivot =a[s];
    int left=s;
    int right=e;
    while(left<right){
        while(a[left]<=pivot){
            left++;
        }
        while(a[right]>pivot){
            right--;
        }
        if(left<right){
            swap(a[left],a[right]);

        }
    }
    swap(a[s],a[right]);
    return right;
}
void quickSort(int a[],int s,int e){
    if(s<e){
    int loc = divide(a,s,e);
    quickSort(a,s,loc-1);
    quickSort(a,loc+1,e);

    }
}


int main(){
    int n;
    cin>>n;
    //printnum(n);
    //numbers(1,n);
    //cout<<sum(n);
    //cout<<fact(n);
    //cout<<sumOfdigits(n);
    //cout<<calcuPower(2,n);
    
    /*for(int i=0;i<n;i++){
        cout<<fibb(i)<<" ";
    }*/
    
    /*string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    digitsToWords(s,n);*/

    /*string str;
    cin>>str;
    checkPalindrome(0,str);*/

    /*int a[]={1,8,5,7,9,2,6};
    revArray(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
    /*sort(a,a+n);
    cout<<recursionLS(a,n,7);
    cout<<recursionBS(a,5,0,n-1);*/

    /*int a[]={1,2,3,4,5};
    cout<<sumOfElements(a,n);*/

    /*string str="yash";
    revString(str,0,str.length()-1);
    cout<<str;*/

    /*vector<int>a={7,4,5,1,2,9,6};
    mergeSort(a,0,n-1);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }*/

    int a[]={7,4,1,2,9,3};
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}