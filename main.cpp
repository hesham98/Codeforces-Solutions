#include <iostream>
using namespace std;

int main(){
    double EnteredNote;
    cin >> EnteredNote;

    int money, x, y;
    money = EnteredNote;
    y = (EnteredNote - money) * 100;


    cout << "NOTAS:" << endl;
    x = money / 100;
    cout << x << " nota(s) de R$ 100.00" << endl;
    money = money % 100;

    x = money / 50;
    cout << x << " nota(s) de R$ 50.00" << endl;
    money = money % 50;

    x = money / 20;
    cout << x << " nota(s) de R$ 20.00" << endl;
    money = money % 20;

    x = money / 10;
    cout << x << " nota(s) de R$ 10.00" << endl;
    money = money % 10;

    x = money / 5;
    cout << x << " nota(s) de R$ 5.00" << endl;
    money = money % 5;

    x = money / 2;
    cout << x << " nota(s) de R$ 2.00" << endl;
    money = money % 2;



    cout << "MOEDAS:" << endl;
    x = money / 1;
    cout << x << " nota(s) de R$ 1.00" << endl;
    money = y;

    x = money / 50;
    cout << x << " nota(s) de R$ 0.50" << endl;
    money = money % 50;

    x = money / 25;
    cout << x << " nota(s) de R$ 0.25" << endl;
    money = money % 25;

    x = money / 10;
    cout << x << " nota(s) de R$ 0.10" << endl;
    money = money % 10;

    x = money / 5;
    cout << x << " nota(s) de R$ 0.05" << endl;
    money = money % 5;


    x = money / 1;
    cout << x << " nota(s) de R$ 0.01" << endl;
    return 0;
}
