#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    int transpose[3][2];
    for(int i =0; i<3;i++){
        for(int j = 0;j<2;j++){
            cout<<matrix[j][i]<<"  "; 
            transpose[i][j] = matrix[j][i];
        }cout<<endl;
    }
    for(int i =0; i<3;i++){
        for(int j = 0;j<2;j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }
}