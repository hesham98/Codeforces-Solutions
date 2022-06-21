#include <iostream>
using namespace std;

int main(){
    int repeted = 0;
    string gender = "0";
    cin >> gender;
    
    for (int i = 0; i < gender.length()-1; i++) {
        for (int j = i+1; j < gender.length(); j++) {
            if (gender[i] == gender[j]) {
                repeted++;
                break;
            }
        }
    }

    if ((gender.length() - repeted) % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    }
    else {
        cout << "IGNORE HIM!\n";
    }
}

