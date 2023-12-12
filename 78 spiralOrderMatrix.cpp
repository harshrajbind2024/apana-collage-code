// run


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
         
    }
    
    int row_start=0,row_end=n-1,col_start=0,col_end=n-1;

     cout<<" print"<<endl;

    while(row_start<=row_end&&col_start<=col_end){
          
          // first-row and col
        for(int i=col_start;i<=col_end;i++){
            cout<<a[row_start][i]<<" ";
        }
        row_start++;

       // lost-col and row  
        for(int i=row_start;i<=row_end;i++){
            cout<<a[i][col_end]<<" ";
        } 
        col_end--; 


        // last-row and col
        for(int i=col_end;i>=col_start;i--){
            cout<<a[row_end][i]<<" ";
        } 
        row_end--; 

        // first-col and row 
        for(int i=row_end;i>=row_start;i--){
            cout<<a[i][col_start]<<" ";
        } 
        col_start++; 

    }

    return 0;
    
}