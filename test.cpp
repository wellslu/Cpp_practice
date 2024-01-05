#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>
using namespace std; 

/*
多行註解
*/

int main() {
    // cout <<"Hello world!\n";
    // int num1 = 0, num2 = 0;
    // cout << "insert num1: \n";
    // cin >> num1;
    // cout << "insert num2: \n";
    // cin >> num2;
    // cout << num1 + num2 << "\n";

    // if (num1 > num2) {
    //     cout << "num1 larger than num2, " << num1 << " > " << num2 << "\n"; // 只有一行的話可把{}拿掉
    // }
    // else if (num1 < num2) cout << "num1 less than num2, " << num1 << " < " << num2 << "\n";
    // else cout << "equal\n";

    // num1 > num2 ? cout << "num1 larger than num2\n" : cout << "num1 not larger than num2\n";

    // switch (num1 + num2) { //只能是整數
    //     case 10: //只能填一般常數
    //         cout << "case 1\n";
    //         break;
    //     case 20:
    //         cout << "case 2\n";
    //         break;
    //     default:
    //         cout << "default\n";
    //         break;
    // }

    // while (num1 > num2) {
    //     cout << "num1 larger than num2, " << num1 << " > " << num2 << "\n"; // 只有一行的話可把{}拿掉
    //     num2++;
    // }

    // int exit = 0;
    // do {
    //     cout << "insert 1 exit\n";
    //     cin >> exit;
    // }
    // while (exit != 1);

    // int i;
    // for (i = 0; i < 10; i++) {
    //     cout << i << "\n";
    // }

    // 求 byte數
    cout << INT_MIN << " " << INT_MAX << "\n";
    cout << "int: " << sizeof(int) << "\n";
    cout << "char: " << sizeof(char) << "\n";
    cout << "bool: " << sizeof(bool) << "\n";
    cout << "short int: " << sizeof(short) << "\n";
    cout << "long int: " << sizeof(long) << "\n";

    // overflow
    short s = 32767;
    cout << s << "\n";
    short s1 = s + 1;
    cout << s+1 << "\n";
    cout << s1 << "\n";

    // char (ascii)
    int i = 0;
    char c;
    while (i <= 127) {
        c = i;
        cout << i << ": " << c << "\n";
        i++;
    }

    float j = 2;
    bool b;
    while (j <= 10) {
        cout << j << ": " << sqrt(j) << " " << setprecision(10) << sqrt(j) * sqrt(j) << "\n";
        j++;
        b = sqrt(j) * sqrt(j) == j;
        cout << b << "\n";
    }

    return 0;
}
