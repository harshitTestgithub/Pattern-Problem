#include<iostream>
using namespace std;

int pattern(int n){
    int spaces=2*n-2;

    for(int i=1;i<=2*n-1;i++){
        //stars
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
            }
            //spacce
            for(int j=1;j<spaces;j++) {
                cout<<"_";
            }

            //star
            for(int j=1;j<=star;j++){
            cout<<"*";
            }
            cout<<endl;
           if(i<n) spaces -=2;
           else spaces +=2;
           
        
    }


}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
/*
*_______*
**_____**
***___***
****_****
**********
****_****
***___***
**_____**
*_______*

*/