#include <iostream>
using namespace std;

void reversestring(string s){
    if(s.length() == 0) {return;}
    reversestring(s.substr(1));
    cout << s[0];
}

int main(){
    string  s;
    cin >> s;
    reversestring(s);
    return 0;
}