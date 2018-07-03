#include <iostream>

using namespace std;

int main(){
    int B, L;
    cin >> B >> L;
     int Count = 0;
     for(int i = 0; i < 6; i++){
        if(B <= L){
            B = B * 3;
            L = L * 2;
            Count++;
        }
     }
        cout << Count << endl;
    return 0;
}
