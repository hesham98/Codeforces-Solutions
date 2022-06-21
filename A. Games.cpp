#include <iostream>
#include <vector>
using namespace std;

int main(){
    int lines = 0;
    cin >> lines;
    int sum = 0;
    vector <vector <int>> teams(lines, vector<int>(2));
   

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> teams[i][j];
        }
    }

    for (int i = 0; i < lines; i++){
        for (int j = 0; j < lines; j++){
            if (teams[i][0] == teams[j][1]) {
                sum++;
            }
        }
    }
    cout << sum << endl;
}
