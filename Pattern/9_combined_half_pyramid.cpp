#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int rows;
    cout<<"Enter teh number of rows: ";
    cin>>rows;

    for(int i=rows;i>=1;i--){
        //Firstly Printing the spaces.
        for(int j=1;j<=(i-1);j++){
            cout<<"  ";
        }

        //Printing the first end of the pyramid.
        for(int j=1;j<=(rows-i)+1;j++){
            cout<<"* ";
        }

        //Printing the second end of the pyramid.
        for(int j=1;j<=(rows-i)+1;j++){
            cout<<"* ";
        } cout<<endl;
    }

    return 0;
}