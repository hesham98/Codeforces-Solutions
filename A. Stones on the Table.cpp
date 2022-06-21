#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numOfStones = 0;
    char* x = 0,* y = 0;
    int sum = 0;
    cin >> numOfStones;
    vector <char> onTable(numOfStones);

    for (int i = 0; i < numOfStones; i++) {
        cin >> onTable[i];
    }

    for (int i = 0; i < numOfStones - 1; i++) {
        x = &onTable[i];
        y = &onTable[i + 1];
        if (*x == *y) {
            sum++;
        }
    }
    cout << sum << endl;
}
