#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> cal(4);
    string str = "";
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        cin >> cal[i];
    }

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            sum += cal[0];
        }
        else if (str[i] == '2') {
            sum += cal[1];
        }
        else if (str[i] == '3') {
            sum += cal[2];
        }
        else if (str[i] == '4'){
            sum += cal[3];
        }
    }
    cout << sum << endl;
}
