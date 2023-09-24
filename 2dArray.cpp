#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 3
void printMatrix(int a[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool searchInmatrix(int a[r][c],int x){
    if(r==0 && c==0 ){
        return false;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==x){
                
                return true;
            }
        }
    }
    return false;
}
void printsumOfrows(int a[r][c] ){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+a[i][j];
        }
        cout<<sum<<endl;
        sum=0;
    }
}
void printWave(int a[r][c]){
    for(int j=0;j<c;j++){
        if(j % 2==0){
            for(int i=0;i<r;i++){
                cout<<a[i][j]<<" ";
            }
        }else{
            for(int i=r-1;i>=0;i--){
               cout<<a[i][j]<<" "; 
            }
        }
    }
}
void rotate_matrix(int m[r][c]){
    for(int i=0;i<r-1;i++){
        for(int j=i+1;j<c;j++){
            swap(m[i][j],m[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        reverse(m[i],m[i]+r);
        
    }
    printMatrix(m);
    
}

void rotateMatrixAnticlockwise(int a[r][c]){
        for(int i=0;i<r;i++){
        reverse(a[i],a[i]+r);
    }
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            swap(a[i][j],a[j][i]);
        }
    }

    printMatrix(a);
}
void spiralMatrix(int a[r][c]){
    
}
bool bsMatrix(int mat[r][c],int target){
    int s=0,e=r*c-1;
    while(s<=e){
        int mid=(s+e)/2;
        int m=mid%c;
        int n=mid/c;
        if(target==mat[m][n])
        return true;
        else if(mat[m][n]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return false;
}
void printSnake(int a[r][c]){
    for(int i=0;i<r;i++){
        if(i % 2==0){
            for(int j=0;j<c;j++){
                cout<<a[i][j]<<" ";
            }
        }else{
            for(int j=c-1;j>=0;j--){
               cout<<a[i][j]<<" "; 
            }
        }
    }
}

int main(){
    /*int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<a[i][j];

        }
        cout<<endl;
    }*/

    /*int m,n;
    cin>>m>>n;
    int a[m][n],b[m][n],c[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    cout<<"\n";
    cout<<"Addition of matrix"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j];
        }
    }*/
     //Transpose of a matrix:

    /*int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<b[j][i]<<" ";
        }
        cout<<endl;
    }*/

    //Matrix multiplication:
    /*int m=3,n=3;
    cout<<"First matrix: "<<endl;
    int a[m][n]={{1,2,0},{9,4,6},{8,5,1}};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Second matrix:"<<endl;
    int p=3,q=3;
    int b[p][q]={{1,2,3},{4,8,6},{0,7,5}};
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int c[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<p;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }*/

    //Matrix search:
    /*int a[r][c]={{1,5,8},{3,9,7},{2,0,1}};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(searchInmatrix(a,4)){
            cout<<"Element found"<<endl;
        }
        else{
        cout<<"Not Found";
        }
    }

// sum of rows:
   
    /*int a[r][c]={{1,5,8},{3,9,7},{2,0,1}};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    printsumOfrows(a);*/

    //Wave pattern:
    /*int a[r][c]={{1,5,8},{3,9,7},{2,0,1}};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    printSnake(a);*/

    //Rotate matrix:
    /*int m[r][c]={{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(m);
    cout<<endl;
    rotate_matrix(m);*/

    int  m[r][c]={{1,2,3},{4,5,6},{7,8,9}};
        printMatrix(m);
        cout<<endl;
        rotateMatrixAnticlockwise(m); 


    /*int m[r][c]={{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(m);
    cout<<endl;
    cout<<bsMatrix(m,4);*/
    
    
}


    



