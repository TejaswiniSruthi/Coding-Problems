#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixMultiplication(int n1,int m1,int n2,int m2,vector<vector<int>>a,vector<vector<int>>b){
    vector<vector<int>> res(n1, vector<int>(m2));
       for(int i=0;i<n1;i++){
           for(int j=0;j<m2;j++){
               for(int k=0;k<m1;k++){
                   cout<< i<<k<<"*"<<k<<j;
                //    res[i][j] += a[i][k] * b[k][j];
                if(k<m1-1) cout<<" + ";
               }
               cout<<"     ";
           }
           cout<<"\n";
       } 
       return res;
}

int main(){
    int n1,m1;
    cin>>n1>>m1;
    vector<vector<int>>a(n1,vector<int>(m1,0));
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cin>>a[i][j];
        }
    }
    int n2,m2;
    cin>>n2>>m2;
    vector<vector<int>>b(n2,vector<int>(m2,0));
     for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cin>>b[i][j];
        }
    }
     vector<vector<int>> ans=matrixMultiplication(n1,m1,n2,m2,a,b);
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}
