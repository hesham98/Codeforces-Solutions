#include <iostream>
#include <string>
using namespace std;

int main(){
    int NumOfGames;
    string name;
    int sumA = 0, sumD = 0;
    cin >> NumOfGames;
    cin >> name;
    for(int i = 0; i < NumOfGames; i++){
        if(name[i] == 'A')
            sumA ++;
        else if (name[i] == 'D')
            sumD ++;
    }
    if(sumA > sumD)
        cout << "Anton" << endl;
    else if(sumA < sumD)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
