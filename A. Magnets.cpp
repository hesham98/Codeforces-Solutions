#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numOfMagits = 0, count = 1, j = 0;
    cin >> numOfMagits;
    vector <int> magnits(numOfMagits);

    for (int i = 0; i < numOfMagits; i++) {
        cin >> magnits[i];
    }

    for (int i = 0; i < numOfMagits-1; i++) {
        j = i + 1;
        if (magnits[i] != magnits[j]) {
            count++;
        }
    }
    cout << count << endl;
}