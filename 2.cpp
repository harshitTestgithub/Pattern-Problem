#include<iostream>
using namespace std;
 int printpattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printpattern(n);
    return 0;
    
}
/*
 print a pattern like this...
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8 
*/