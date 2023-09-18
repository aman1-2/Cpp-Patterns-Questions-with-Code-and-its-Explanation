#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;i++){
        //Printing the spaces.
        for(int j=1;j<=(rows-i);j++){
            cout<<"  ";
        }

        //Printing the start to form full pyramid with the equal number of star as row number.
        for(int j=1;j<=i;j++){
            cout<<"*  ";
        } cout<<endl;

    }

    return 0;
}