#include<iostream>
using namespace std;
int pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"* ";
        }cout<<endl;
    }
}

int main(){

    int n;
    cin>>n;
 pattern(n);
 return 0;
}