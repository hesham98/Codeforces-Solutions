#include <iostream>
using namespace std;

int main(){
    int numOfOranges = 0;
    cin >> numOfOranges;
    int juicerSize = 0;
    cin >> juicerSize;
    int wasteSize = 0;
    cin >> wasteSize;
    int orageSize = 0, Waste = 0, count = 0;
    for (int i = 0; i < numOfOranges; i++) {
        cin >> orageSize;
        if (orageSize <= juicerSize){
            Waste += orageSize;
            if (Waste > wasteSize) {
                count++;
                Waste = 0;
            }
        }
    }
    cout << count << "\n";
}
