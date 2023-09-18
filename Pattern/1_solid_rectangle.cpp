/*In Thses Types of pattern Question one thing that we make sure is 
we should have the knowledge of these three things:-

(i)Number of rows we have to play with.And what we have to print in those rows. 
(ii)NUmber of cloumns we have in our pattern and what we have to do in those pattern.
(iii)Thirdly we have to search what type of values we have to print.

And with the help f these three things we can create a formula.That how are pattern should be
formed.*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int rows,column;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>column;

    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cout<<"* ";
        }cout<<endl;
    }

    return 0;
}