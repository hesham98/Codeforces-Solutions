#include <iostream>
using namespace std;

int main(){
    int lower = 0, upper = 0;
    string name;
    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        if (islower(name[i])) {
            lower++;
        }
        else {
            upper++;
        }
    }


    if (lower < upper) {
        for (int i = 0; i < name.length(); i++) {
            if (islower(name[i])) {
                cout << char(name[i] - 32);
            }
            else {
                cout << char(name[i]);
            }
        }
    }

    else {
        for (int i = 0; i < name.length(); i++) {
            if (islower(name[i])) {
                cout << char(name[i]);
            }
            else {
                cout << char(name[i] + 32);;
            }
        }
    }
    cout << endl;
    return 0;
}