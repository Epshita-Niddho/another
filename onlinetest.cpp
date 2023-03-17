#include<iostream>
using namespace std;

int myFun(int p1, int p2){

    return p1+p2;
}

int main(){
    int n=12;
    int i;
    for(i=0; i<n/2 ; i++){
        if(i<=5){
            i++;
        }else{
        break;}
    }
    cout<<i;
}
