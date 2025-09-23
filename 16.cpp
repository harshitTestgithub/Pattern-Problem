#include<iostream>
using namespace std;
 void pattern(int n){
  int insp=0;
    for(int i=0;i<n;i++){
      for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        
        for(int j=0;j<insp;j++){
            cout<<"_";
        
        }
         for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        insp+=2;
        cout<<endl;
    }
}

int pattern2(int n){
 int space=2*(n-1);
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=space;j++){
        cout<<"_";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    space-=2;
 }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
    pattern2(n);
    return 0;

}

/*
**********
****__****
***____***
**______**
*________*
*________*
**______**
***____***
****__****
**********
*/