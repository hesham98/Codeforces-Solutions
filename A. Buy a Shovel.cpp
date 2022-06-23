#include <iostream>
using namespace std;

int main(){

    int shovelPrice = 0, coin = 0, numOfShovel = 1;
    cin >> shovelPrice;
    cin >> coin;

    while(true){
        if ( (shovelPrice * numOfShovel) % 10 == coin || (shovelPrice * numOfShovel) % 10 == 0) {
            cout << numOfShovel << endl;
            break;
        }
        
        else {
            numOfShovel++;
        }
    }
}
