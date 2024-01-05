#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char *arg[]) {
    // int c = 0;
    // while(cin >> c) {
    //     cout << static_cast<char>(tolower(c)) << "\n";
    // }

    // char str[10] = {0};
    // cin >> str;
    // cout << str[2] << "\n";
    // cout << str << "\n";

    // char str1[10] = "abcd\0";
    // char str2[10] = "abcd\0dsd\0";
    // cout << str1 << "\n";
    // cout << str2 << "\n";

    // char a[100];
    // cin.getline(a, 100); // 12345678
    // cout << a << "\n";

    // cout << strlen(a) << "\n";
    // cout << sizeof(a) << "\n";

    // char *p = strchr(a, '4');
    // if (strchr(a, 'a') == nullptr) {
    //     cout << "!!!\n";
    // }
    // cout << p << "\n";
    // cout << strchr(a, '4') << "\n";
    // cout << strchr(a, '4') - a << "\n";
    
    // p = strstr(a, "45");
    // *p = '5';
    // *(p + 1) = '4';
    // cout << a << endl;

    char b[100] = "1234";
    cout << atoi(b) * 2 << endl; // transfer to int
    char c[100] = "12.34";
    cout << atof(c) / 2 << endl; // transfer to float

    char d[10] = "aaa";
    char e[10] = "bbb";
    cout << strcmp(d, e) / 2 << endl; // 比較排序大小
    cout << strncmp(d, e, 2) / 2 << endl; // 只比較前兩個

    char w[100] = "watermelon";
    char o[100] = "orange";
    cout << w << endl;
    // strcpy(w, o);
    // cout << w+7 << endl;
    strcat(w, o);
    cout << w << endl;

    // char *p;
    // cin >> p; // X
    // char *p = "12345"; // O
    // char *p = new char[100];
    // cin >> p; // O
    // delete [] p;

    // cout << argc << endl;

    return 0;
}