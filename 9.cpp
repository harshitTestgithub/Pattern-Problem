#include<iostream>
using namespace std;
int pattern(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<space;j++){
            cout<<"_";
              
        }
        for(int j=i;j>=1;j--){
            cout<<j;
       
        }cout<<endl;
      space -=2;
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;

}