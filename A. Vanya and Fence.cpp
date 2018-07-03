#include <iostream>

using namespace std;

int main(){

    int NumOfFriends, HeightOfFence;
    int MinPosible = 0;
    cin >> NumOfFriends >> HeightOfFence;
    for(int i = 0; i < NumOfFriends; i++){
        int HeightOfFriend;
        cin >> HeightOfFriend;
        if(HeightOfFriend <= HeightOfFence){
            MinPosible += 1;
        }
        else if (HeightOfFriend > HeightOfFence){
            MinPosible += 2;
        }
    }
    cout << MinPosible << endl;
    return 0;
}
