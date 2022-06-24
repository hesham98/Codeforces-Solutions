#include <iostream>
using namespace std;

int main(){
    int x = 0, y = 0, num = 0;
    cin >> x;
    cin >> y;
    if (x > y) {
        for (int i = x; i < 7; i++) {
            num++;
        }
    }
    else {
        for (int i = y; i < 7; i++) {
            num++;
        }
    }

    switch (num) {
        case(1): {
            cout << "1/6" << endl;
            break;
        }case(2): {
            cout << "1/3" << endl;
            break;
        }case(3): {
            cout << "1/2" << endl;
            break;
        }case(4): {
            cout << "2/3" << endl;
            break;
        }case(5): {
            cout << "5/6" << endl;
            break;
        }case(6): {
            cout << "1/1" << endl;
            break;
        }
    }
}
