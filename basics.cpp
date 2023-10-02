#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[4][2];
    cout<<"Enter the elements of array: ";
    for(int i = 0;i<4;i++){
        for(int j =0;j<2;j++){
            cin>>array[i][j];
        }
    }
    for(int i = 0;i<4;i++){
        for(int j =0;j<2;j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }
}