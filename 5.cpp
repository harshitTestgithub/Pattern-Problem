#include<iostream>
using namespace std;
int pattern (int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        for(int j=0;j<9-2*i;j++){
            cout<<"*";

        }
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}

/*
*********
 ******* 
  *****  
   ***
    *

*/