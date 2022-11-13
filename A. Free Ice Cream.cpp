#include <iostream>
using namespace std;

int main(){
	int numOfInputs = 0;
	long long numOfIceCreamPacks = 0;
	char operation = ' ';
	long long iceCream = 0;
	int distress = 0;
	cin >> numOfInputs >> numOfIceCreamPacks;
	for (int i = 0; i < numOfInputs; i++) {
		cin >> operation >> iceCream;
		if (operation == '+') {
			numOfIceCreamPacks += iceCream;
		}
		else if (operation == '-') {
			if (iceCream > numOfIceCreamPacks) {
				distress++;
			}
			else {
				numOfIceCreamPacks -= iceCream;
			}
		}
	}
	cout << numOfIceCreamPacks << " " << distress << endl;
	return 0;
}