#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == ',' || s[i] == ' ' || s[i] == '{' || s[i] == '}') {
            continue;
        }
        else {
            for (int j = i + 1; j < s.size();j++) {
                if (s[j] == ',' || s[j] == ' ' || s[j] == '}' || s[j] == '{') {
                    continue;
                }
                else if (s[j] < s[i]) {
                    swap(s[j], s[i]);
                }
            }
        }
    }

    vector <char> v1(26);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',' || s[i] == ' ' || s[i] == '{' || s[i] == '}') {
            continue;
        }
        else {
            if (v1.back() != s[i]) {
                v1.push_back(s[i]);
            }
         }
    }
    cout << v1.size() - 26 << endl;;
    return 0;
}