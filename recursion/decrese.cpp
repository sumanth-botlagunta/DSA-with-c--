#include <iostream>
using namespace std;

void print_decreasing_order(int n){
    if(n==1){
        cout<< 1<<" "<<endl;
        return;
    }
    cout<<n<<endl;
    print_decreasing_order(n-1);
}

void print_increasing_order(int n) {
    if(n==1){
        cout<< 1<<" "<<endl;
        return;
    }
    print_increasing_order(n-1);
    cout<<n<<endl;

}

int main(){
    int n;
    cin >> n;
    print_decreasing_order(n);
    print_increasing_order(n);
    return 0;
}