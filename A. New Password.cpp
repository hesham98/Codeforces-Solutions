#include <iostream>
#include <vector>
using namespace std;

int main(){
    const vector <char> alpha {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int numOfChar = 0, numOfAlpha = 0;
    cin >> numOfChar >> numOfAlpha;
    vector <char> pass;

    for (int i = 0; i < numOfAlpha; i++) {
        pass.push_back(alpha[i]);
    }

    for (int i = 0; i < numOfChar; i++) {
        if (numOfAlpha <= i) {
            numOfChar = numOfChar - pass.size();
            i = 0;
            cout << pass[i];
        }
        else {
            cout << pass[i];
        }
    }
}