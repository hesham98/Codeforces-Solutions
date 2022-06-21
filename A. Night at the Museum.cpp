#include <iostream>
using namespace std;

int main(){
    string name = "";
    cin >> name;
    
    int ASCIICode = 0, start = 0, sum = 0, destination = 0;

    for (int i = 0; i < name.length(); i++) {
        ASCIICode = name[i] - 97;
        destination = abs(start - ASCIICode);
        if (destination > 13) {
            sum += 26 - destination;
        }
        else {
            sum += destination;
        }
        start = ASCIICode;

    }

    cout << sum << "\n";
}
