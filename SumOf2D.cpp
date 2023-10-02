#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;
    int col;
    cout<<"enter number of column: ";
    cin>>col;
    int array[row][col];
    for(int i =0; i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>array[i][j];
        }
    }
    int sum = 0;
    for(int i =0; i<row;i++){
        for(int j = 0;j<col;j++){
            sum +=array[i][j];
        }
    }
    cout<<sum;
}