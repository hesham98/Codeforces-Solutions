#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;


    if (s1 == s2) {
        cout << "-1" << endl;
    }
    else if (s1.size() > s2.size()) {
        cout << s1.size() << endl;
    }
    else {
        cout << s2.size() << endl;
    }

    
 }
