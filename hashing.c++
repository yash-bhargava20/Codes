#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int hash[n]={0};
        for(int i=0;i<n;i++){
        hash[a[i]]+=1;
        
    }

    int q;
    cin>>q;
    while(q--){
        int nums;
        cin>>nums;
        cout<<hash[nums]<<endl;
    }

    string s;
    cin>>s;
    int hash1[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }
    int q1;
    cin>>q;
    while(q--){
        int c;
        cin>>c;
        cout<<hash[c]<<endl;
    }


    return 0;
}
    
    