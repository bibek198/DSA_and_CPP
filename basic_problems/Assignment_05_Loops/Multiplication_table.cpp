#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Multiplication table priner !!!" << endl;

    int num;
    cout << "Enter a number : " ;
    cin >> num;

    for (int i = 1; i <= 10; i++){
        cout << num << " X " << i << " = " << num * i << endl;
    } 

    return 0;
}