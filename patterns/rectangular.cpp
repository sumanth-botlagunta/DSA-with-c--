#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    rows=5;
    cols=2;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}