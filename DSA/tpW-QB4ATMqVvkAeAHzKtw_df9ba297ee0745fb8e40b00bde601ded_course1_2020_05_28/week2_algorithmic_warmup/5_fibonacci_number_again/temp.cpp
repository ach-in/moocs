#include<bits/stdc++.h>
using namespace std;

int main(){
     int temp;
    
     vector<vector<int>> A;

    int n = A.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=n-1; j>n/2; j--){
            temp = A[i][j];
            A[i][j] = A[i][n-j-1];
            A[i][n-j-1] = temp;
        }
    }
}