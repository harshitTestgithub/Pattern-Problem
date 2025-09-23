#include<iostream>
using namespace std;
int pattern(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;   
        for(int j=0;j<=i;j++){
       cout<<ch<<" ";
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
A
B B
C C C
D D D D
E E E E E*/