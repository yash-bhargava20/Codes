#include<bits/stdc++.h>
using namespace std;
void reversString(char s[]){
    int length=strlen(s);
    for(int i=length-1;i>=0;i--){
        cout<<s[i];
    }

}
void swapString(string s1,string s2){
    s1.swap(s2);
    cout<<s1<<" "<<s2;

}
//without string function
void isPalindrome(string str){
    int s=0,e=str.length()-1;
    while(s<e){
        if(str[s++]!=str[e--]){
            cout<<"no";
        }
    }
     cout<<"yes";
}
bool checkPalindrome(string s){
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s)
    return true;
    else 
    return false;
}
void compareString(string s1,string s2){
    int x=s1.compare(s2);
    if(x != 0){
        cout<<s1<<" string is not identical to "<<s2;
    }else{
        cout<<s1<<" string are identical to "<<s2;
    }
}
string toLower(string s){
    for(int i=0;i<s.length();i++){
    if(s[i]>=65 && s[i]<=90){
        s[i]=s[i]+32;
    }
    }
    return s;
}
string toUpper(string s){
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
    }
    return s;
}
char getmaxOccurance(string s){
    int arr[256]={0};
    int max=0;
    for(int i=0;i<s.length();i++){
        arr[s[i]]++;
    }
    char result;
    for(int i=0;i<s.length();i++){
        if(max<arr[s[i]]){
        max=arr[s[i]];
        result=s[i];
        }
    }
    return result;

}

void reverseWords(string s){
    vector<string>temp;
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            ans=ans+s[i];
        }else{
            temp.push_back(ans);
            ans="";
        }
    }
    temp.push_back(ans);
    for(int i=temp.size()-1;i>=0;i--){
        cout<<temp[i]<<" ";
    }
}
string replacespaces(string s){
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
        ans.push_back('*');
    }else{
        ans.push_back(s[i]);
    }
    } 
    return ans;  
}
//using buuble sort
void sortString(string s){
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length()-i-1;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}
void isAnagram(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
    cout<<"yes";
    else
    cout<<"no";

}
string removeDuplicate(string str){
    string ans="";
    set<char>s;
    for(int i=0;i<str.length();i++){
        if(s.find(str[i])==s.end()){
            s.insert(str[i]);
        ans=ans+str[i];
        }  
        
    }
    return ans;
}
int makeAnagram(string s1,string s2){
    map<char,int>m;
    for(int i=0;i<s1.length();i++){
        m[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        m[s2[i]]--;
    }
    int count=0;
    for(auto &p:m){
        count=count+abs(p.second);
    }
    return count;
}
bool ismorphicString(string a,string b){
    unordered_map<char,vector<int>>m1;
    unordered_map<char,vector<int>>m2;
    for(int i=0;i<a.length();i++){
        m1[a[i]].push_back(i);
        m2[b[i]].push_back(i);
        if(m1[a[i]]!=m2[b[i]]){
        return false;
        }
    }
    return true;
}
int main(){
   /*char s[]="hello";
   cout<<s<<endl;;
   reversString(s);*/

   /*string s;
   cin>>s;
   isPalindrome(s);*/

    /*string s1="yash";
    string s2="yash";
    compareString(s1,s2);*/

   

    /*string s="sky is blue";
    reverseWords(s);*/

    /*string s1="a";
    string s2="b";
    cout<<s1<<" "<<s2<<endl;
    //after swapping
    swapString(s1,s2);*/

    /*string s="test";
    cout<<getmaxOccurance(s);*/

    /*string s="sky is blue";
    cout<<replacespaces(s);*/

    /*string s;
    cin>>s;
    //sortString(s);
    cout<<removeDuplicate(s);*/

    /*string a;
    string b;
    cin>>a;
    cin>>b;
    isAnagram(a,b);*/

    /*string s;
    cin>>s;
    //cout<<toLower(s);
    cout<<toUpper(s);*/
    
    /*string s1="abcd";
    string s2="bce";
    cout<<makeAnagram(s1,s2);*/

    /*string s="aabcsdsee";
    cout<<removeDuplicate(s);*/
    string a="aba";
    string b="edf";
    cout<<ismorphicString(a,b);

    return 0;
}