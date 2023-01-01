#include <iostream>
#include <map>
using namespace std;

int main() {
    int inputs = 0;          
    cin >> inputs;
    int max = inputs;
    map <int, bool> Snacktower;
    int num = 0;
    for (int i = 0; i < inputs; i++) { 

        cin >> num;
        Snacktower[num] = true;

        while (Snacktower[max]) {
            cout << max << " ";
            max--;
        }
        cout << endl;
    }
}
