#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows,cloumn;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cloumn;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cloumn;j++){
            if(i==0 || i==rows-1 || j==0 || j==cloumn-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }

    return 0;
}