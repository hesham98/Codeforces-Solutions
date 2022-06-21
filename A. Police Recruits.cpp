#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numOfEvents = 0, officer = 0, untreated = 0;
    cin >> numOfEvents;
    vector <int> crimeAndPolice(numOfEvents);

    for (int i = 0; i < numOfEvents; i++) {
        cin >> crimeAndPolice[i];
    }
    for (int i = 0; i < numOfEvents; i++) {
        if (crimeAndPolice[i] > 0) {
            officer += crimeAndPolice[i];
        }
        else if (crimeAndPolice[i] < 0) {
            if (officer > 0) {
                officer--;
            }
            else if (officer == 0) {
                untreated++;
            }
        }
    }
    cout << untreated << endl;
}
