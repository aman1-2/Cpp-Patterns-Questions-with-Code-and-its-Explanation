#include<bits/stdc++.h>
using namespace std;
int main(){

    int rows;
    cout<<"Enter the rows to print a Square Pattern: ";
    cin>>rows;

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cout<<"* ";
        }cout<<endl;
    }

    return 0;
}