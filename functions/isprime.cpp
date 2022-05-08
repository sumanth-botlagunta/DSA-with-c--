#include <iostream>
#include <math.h>
using namespace std;

bool Isprime(int p){
    for(int i=2; i<=sqrt(p); i++){
        if(p%i ==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a , b;
    cin >>a >>b;

    for(int i= a; i<= b; i++){
        if(Isprime(i)){
            cout<< i <<'\n';
        }
    }


    return 0;
}