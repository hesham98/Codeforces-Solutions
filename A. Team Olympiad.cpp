#include <iostream>
#include <vector>
using namespace std;

int minimun(int ones, int twos, int threes) {
	if (ones <= twos && ones <= threes) {
		return ones;
	}
	else if (twos <= ones && twos <= threes) {
		return twos;
	}
	else if (threes <= ones && threes <= twos) {
		return threes;
	}
}

int main(){
	int inputs = 0;
	cin >> inputs;

	vector <int> students(inputs);
	vector <int> onesPostions;
	vector <int> twosPostions;
	vector <int> threesPostions;
	int ones = 0, twos = 0, threes = 0;

	for (int i = 0; i < inputs; i++) {
		cin >> students[i];
	}

	for (int i = 0; i < inputs; i++) {
		if (students[i] == 1) {
			ones++;
			onesPostions.push_back(i+1);
		}else if(students[i] == 2) {
			twos++;
			twosPostions.push_back(i+1);
		}
		else if (students[i] == 3) {
			threes++;
			threesPostions.push_back(i+1);
		}
	}

	int min = minimun(ones, twos, threes);
	cout << min << endl;

	for (int i = 0; i < min; i++){
		cout << onesPostions[i] << " " << twosPostions[i] << " " << threesPostions[i] << endl;
		
	}
}

