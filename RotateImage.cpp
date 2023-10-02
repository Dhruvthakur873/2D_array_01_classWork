#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i =0; i<3;i++){
        for(int j = i+1;j<3;j++){
            if(i==j) continue;
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    int n  = sizeof(matrix[0])/4;
    for(int k = 0;k<sizeof(matrix[0])/4;k++){
        int i = 0;
        int j = n-1;
        while(i<=j){
            swap(matrix[k][i],matrix[k][j]);
            i++;
            j--;
        }
    } 
    for(int i =0; i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<matrix[i][j]<<"  ";
        }cout<<endl;
    } 
}