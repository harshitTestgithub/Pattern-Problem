#include<iostream>
using namespace std;
int pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }cout<<endl;
    }

}
//one another way to print this pattern
int diffapproach(int n){
    for(int i=1;i<=2*n-1;i++){
int start=i;
if(i>n) start=2*n-i;

        for(int j=1;j<=start;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    //pattern1(n);
    //pattern2(n);
    diffapproach(n);
    return 0;

}