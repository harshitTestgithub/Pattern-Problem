#include<iostream>
using namespace std;

int pattern (int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=1;j<n-i-1;j++){
            cout<<"_";
        }
        // Alphabet
     
        char ch='A';
           int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
           cout<<ch;
           if(j<=breakpoint) ch++;
           else ch--;
          
        }
        //space 
        for(int j=1;j<n-i-1;j++){
            cout<<"_";
        }cout<<endl;


    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;

}/*
___A___
__ABA__
_ABCBA_
ABCDCBA
ABCDEDCBA*/