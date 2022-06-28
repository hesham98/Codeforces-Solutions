#include <iostream>
using namespace std;

int main(){

	int wantedCakes = 0, timeToBake = 0, numOfBaked = 0, timeToBuildOven = 0;
	cin >> wantedCakes >> timeToBake >> numOfBaked >> timeToBuildOven;
	int times = (wantedCakes + numOfBaked-1) / numOfBaked;
	int bakeInOne = 0;
	int bakeInTwo = timeToBuildOven;
	for (int i = 0; i < times; i++) {
		if (bakeInOne < bakeInTwo) {
			bakeInOne += timeToBake;
		}
		else {
			bakeInTwo += timeToBake;
		}
	}

	if (max(bakeInOne, bakeInTwo) < (times*timeToBake)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
