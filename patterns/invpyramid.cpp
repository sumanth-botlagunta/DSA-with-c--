#include <iostream>
using namespace std;

int main(){
    int n;
    n=7;
    for(int i=7;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}