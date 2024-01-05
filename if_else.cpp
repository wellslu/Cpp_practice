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

    if (num1 > num2) {
        cout << "num1 larger than num2, " << num1 << " > " << num2 << "\n"; // 只有一行的話可把{}拿掉
    }
    else if (num1 < num2) cout << "num1 less than num2, " << num1 << " < " << num2 << "\n";
    else cout << "equal\n";

    num1 > num2 ? cout << "num1 larger than num2\n" : cout << "num1 not larger than num2\n";

    switch (num1 + num2) { //只能是整數
        case 10: //只能填一般常數
            cout << "case 1\n";
            break;
        case 20:
            cout << "case 2\n";
            break;
        default:
            cout << "default\n";
            break;
    }

    return 0;
}
