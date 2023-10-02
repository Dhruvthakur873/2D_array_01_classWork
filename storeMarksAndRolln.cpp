#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of students : ";
    cin>>row;
    int col;
    cout<<"enter number of entries: ";
    cin>>col;
    int store[row][col];
    for(int i =0; i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>store[i][j];
        }
    }
    for(int i =0; i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<store[i][j]<<"  ";
        }cout<<endl;
    }
}