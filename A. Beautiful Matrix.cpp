#include <iostream>

using namespace std;

int main(){
    int i, j;
    int arr[5][5];
    int Count = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                if(i == 0 || i == 4)
                    Count += 2;
                else if(i == 1 || i == 3)
                    Count ++;
                if(j == 0 || j == 4)
                    Count += 2;
                else if(j == 1 || j == 3)
                    Count ++;
            }
        }
    }
    cout << Count << endl;
    return 0;
}
