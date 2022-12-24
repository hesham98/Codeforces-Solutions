#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string sumOperation = "";
    cin >> sumOperation;
    vector <char> v1(0);
    
    for (int i = 0; i < sumOperation.length(); i++) {
        if (sumOperation[i] != '+') {
            v1.push_back(sumOperation[i]);
        }
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i];
        if (i != v1.size()-1) {
            cout << "+";
        }
    }   
}
