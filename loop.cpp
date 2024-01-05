#include <iostream>
using namespace std; 

/*
多行註解
*/

int main() {
    int num1 = 0, num2 = 0;
    cout << "insert num1: \n";
    cin >> num1;
    cout << "insert num2: \n";
    cin >> num2;
    cout << num1 + num2 << "\n";

    while (num1 > num2) {
        cout << "num1 larger than num2, " << num1 << " > " << num2 << "\n"; // 只有一行的話可把{}拿掉
        num2++;
    }

    int exit = 0;
    do {
        cout << "insert 1 exit\n";
        cin >> exit;
    }
    while (exit != 1);

    int i;
    for (i = 0; i < 10; i++) {
        cout << i << "\n";
    }

    return 0;
}
