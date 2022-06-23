#include <iostream>
using namespace std;

int main(){
    int step = 0;
    string stonesColor = "", instructions = "";
    cin >> stonesColor;
    cin >> instructions;

    for (int i = 0; i < instructions.length(); i++) {
        if (stonesColor[step] == instructions[i]) {
            step++;
        }
    }
    cout << step+1 << endl;
}
