#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=rows;i>=1;i--){
        //Printing spaces
        for(int j=1;j<=(i-1);j++){
            cout<<"  ";
        }

        //Printing Star
        for(int j=1;j<=(rows-i+1);j++){
            cout<<"* ";
        } cout<<endl;
    }

    return 0;
}