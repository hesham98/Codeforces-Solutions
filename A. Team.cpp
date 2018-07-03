#include <iostream>

using namespace std;

int main(){
    int NumOfProblems;
    cin >> NumOfProblems;
    int arr[3];
    int sum = 0;
    for(int N = 0; N < NumOfProblems; N++){
        for(int j = 0; j < 3; j++){
            cin >> arr[j];
        }
        if((arr[0] + arr[1] + arr[2]) > 1)
            sum ++;
    }
    cout << sum << endl;
    return 0;
}
