#include <iostream>
#include <vector>
using namespace std;

int main(){
    int times = 0;
    cin >> times;
    vector <string> words(times);
    for (int i = 0; i < times; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < times; i++) {
        string s = words[i];
        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }
        else {
            cout << s << endl;
        }
    }
    return 0;
}
