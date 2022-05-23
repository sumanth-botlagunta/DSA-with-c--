#include <iostream>
using namespace std;

int main(){
    int c = 15;
    int total = 0;
    int n = c;

    while(n>=3){
        n = n-3+1;
        total += 1;
    }
    cout << total + c;


    return 0;
}