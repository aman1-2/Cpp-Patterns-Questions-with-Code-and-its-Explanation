#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int rows,count=1;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=rows;i>=1;i--){
        //Printing spaces
        for(int j=1;j<=(i-1);j++){
            cout<<"  ";
        }

        //Printing Star
        for(int j=1;j<=(rows-i+1);j++){
            cout<<count++<<" ";
        } count=1;

        //Printing the other side of the pyramid just from where it has ended.
        for(int j=1;j<(rows-i+1);j++){
            cout<<count++<<" ";
        } count=1; 
        cout<<endl;

    }

    return 0;
}