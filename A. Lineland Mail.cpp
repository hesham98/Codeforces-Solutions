#include <iostream>
#include <vector>
using namespace std;

int minmum(int a, int b){
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

int maxmum(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int inputs = 0, coordinate = 0;
    vector <int> inputsVector;

    int min1 = 0, min2 = 0, min = 0;
    vector <int> vmin;

    int max1 = 0, max2 = 0, max = 0;
    vector <int> vmax;
    
    //Enter inputs
    cin >> inputs;
    for (int i = 0; i < inputs; i++) {
        cin >> coordinate;
        inputsVector.push_back(coordinate);
    }
    //Get maxmum
    for (int i = 0; i < inputs; i++) {
        if (i == 0) {
            max = inputsVector.back() - inputsVector[i];
        }else if(i == inputsVector.size() - 1) {
            max = inputsVector[i] - inputsVector.front();
        }
        else {
            max1 = inputsVector.back() - inputsVector[i];
            max2 = inputsVector[i] - inputsVector.front();
            max = maxmum(max1, max2);
        }
        
        vmax.push_back(max);
    }
    

    //get Minmum
    for (int i = 0; i < inputs; i++) {
        if (i == 0) {
            min = inputsVector[i + 1] - inputsVector[i];
        }else if (i == inputsVector.size() - 1) {
            min = inputsVector[i] - inputsVector[i - 1];
        }else {
            min1 = inputsVector[i] - inputsVector[i - 1];
            min2 = inputsVector[i + 1] - inputsVector[i];
            min = minmum(min1, min2);
        }

        vmin.push_back(min);
    }

    //print
    for (int i = 0; i < inputsVector.size(); i++) {
        cout << vmin[i] << " " << vmax[i] << endl;
    }

    return 0;
}

