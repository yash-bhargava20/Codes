#include<iostream>
#include<vector>
using namespace std;
void numbers(vector<int>&v){
for(int i=0;i<10;i++){
        v.push_back(i);
    }
     v.insert(v.begin()+4,11);
     v.pop_back();
}
int main(){
   /*int size;
    vector<int>v(size);
    cin>>size;*/
    /*cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.resize(10);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.pop_back();

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<endl;

    v.insert(v.begin()+3,7);
    v.erase(v.end()-3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }*/
  
    //for each loop

    /*for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;*/

vector<int>v;
    numbers(v);
    for(int j=0;j<10;j++){
        cout<<v[j]<<" ";
    }
    

}