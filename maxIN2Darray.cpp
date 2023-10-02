#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"row : ";
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
    int max = INT_MIN;
    for(int i =0; i<row;i++){
        for(int j = 0;j<col;j++){
            if(max<array[i][j]){
                max= array[i][j];    
            }
        }
    }

    cout<<endl<<max;
}