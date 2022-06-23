#include <iostream>
using namespace std;

int main(){
    int sameColor = 0;
    int colors[4] = {0};

    for (int j = 0; j < 4; j++) {
        cin >> colors[j];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (colors[i] == colors[j]) {
                sameColor++;
                break;
            }
        }
    }
    cout << sameColor << endl;
}