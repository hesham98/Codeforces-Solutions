#include <iostream>
using namespace std;

int main(){
    int numOfProblems = 0, i = 0, sum = 0, willSolve = 0;
    int a = 0, b = 0, c = 0;
    cin >> numOfProblems;
    while (i < numOfProblems) {
        cin >> a >> b >> c;
        sum = 0;
        i++;
        sum = a + b + c;
        if (sum >= 2) {
            willSolve++;
        }
    }
    cout << willSolve << endl;

}
