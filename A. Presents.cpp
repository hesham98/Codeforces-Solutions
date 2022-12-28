#include <iostream>
#include <map>
using namespace std;

void print(map <int, int> &v) {
    for (auto i : v) {
        cout << i.second << " ";
    }
    cout << endl;
}

int main(){

    int size = 0, inputs = 0;
    cin >> size;
    map <int, int> m;
    for (int i = 1; i <= size; i++) {
        cin >> inputs;
        m[inputs] = i;
    }
    print(m);
    return 0;
}
