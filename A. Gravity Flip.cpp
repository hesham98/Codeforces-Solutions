// A. Gravity Flip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>    
using namespace std;

int main(){
    int numOfColumns = 0;
    

    cin >> numOfColumns;
    vector <int> numOfCubes(numOfColumns);
    for (int i = 0; i < numOfColumns; i++) {
        cin >> numOfCubes[i];
    }

    sort(numOfCubes.begin(), numOfCubes.end());

    for (int i = 0; i < numOfColumns; i++) {
        cout << numOfCubes[i] << " ";
    }

}
