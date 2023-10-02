#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Matrix 1"<<endl;
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
    cout<<"Matrix 2"<<endl;
    int row1;
    cout<<"Enter the number of rows : ";
    cin>>row1;
    int col1;
    cout<<"enter number of column: ";
    cin>>col1;
    int array1[row1][col1];
    for(int i =0; i<row1;i++){
        for(int j = 0;j<col1;j++){
            cin>>array1[i][j];
        }
    }
    int arrayadd[row][col];
    if(row==row1&&col==col1){
        for(int i =0; i<row;i++){
            for(int j = 0;j<col;j++){
                arrayadd[i][j] =array[i][j]+array1[i][j];
            }
        }
        for(int i =0; i<row;i++){
            for(int j = 0;j<col;j++){
                cout<<arrayadd[i][j];
            }
        }
    }
    else cout<<"matrices can't be added";


}