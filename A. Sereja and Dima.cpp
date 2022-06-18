#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sereja = 0, dima = 0;
    bool serejaTurn = 1, dimaTurn = 0;
    int numOfCards = 0;
    cin >> numOfCards;
    vector  <int> cards(numOfCards);

    for (int i = 0; i < numOfCards; i++) {
        cin >> cards[i];
    }

    int* f = &cards[0];
    int* l = &cards[numOfCards -1];

    while(f <= l) {
        if (serejaTurn) {
            if (*l >= *f) {
                sereja += *l;
                l--;
            }
            else if (*l <= *f) {
                sereja += *f;
                f++;
            }
            dimaTurn = 1;
            serejaTurn = 0;
        }
        else if (dimaTurn) {
            if (*l >= *f) {
                dima += *l;
                l--;
            }
            else if (*l <= *f) {
                dima += *f;
                f++;
            }
            dimaTurn = 0;
            serejaTurn = 1;
        }

    }
    cout << sereja << " " << dima << endl;
}
