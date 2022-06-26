#include <iostream>
#include <vector>
using namespace std;


int main(){
    int numOfBoxes = 0;
    cin >> numOfBoxes;

    vector <int> Birds(numOfBoxes);
    for (int i = 0; i < numOfBoxes; i++) {
        cin >> Birds[i];
    }

    int shots = 0;
    cin >> shots;
    

    for (int i = 0; i < shots; i++) {
        int shotedBird = 0, shotedBox = 0;
        cin >>  shotedBox >> shotedBird;
       --shotedBox;

       if (shotedBox != 0) {
           Birds[shotedBox - 1] += shotedBird - 1;
       }
       if (shotedBox != numOfBoxes - 1) {
           Birds[shotedBox + 1] +=  Birds[shotedBox] - shotedBird;
       }
       Birds[shotedBox] = 0;
    }
    for (int i = 0; i < numOfBoxes; i++) {
        
        cout << Birds[i] << endl;
    }
}
