#include <iostream>

using namespace std;

void print(int **arr, int r) {
    for(int i=0; i < r; i++) {
        for(int j=0; j <= i; j++) {
            cout << arr[i][j] << ", ";
        }
        cout << "\n";
    }
}

int main() {
    // int score[5];
    // int i = 0;
    // while (i < 5) {
    //     cin >> score[i];
    //     i++;
    // }
    // for (int j = 0; j < 5; j++) {
    //     cout << score[j] << " ";
    // }
    // cout << score << "\n";
    // cout << sizeof(score) << "\n";
    // cout << score + 2 << "\n"; // 往後兩位的位址

    // int array[10] = {0};
    // for (int i = 0; i < 50; i++) {
    //     cout << array[i] << "\n";
    // }

    // cout << sizeof(score) / sizeof(score[0]) << "\n"; // array length

    // int twoDimArray[3][4] = {0};
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 4; j++){
    //         cout << twoDimArray[i][j] << ", ";
    //     }
    //     cout << endl;
    // }

    // // DMA
    // // allocation a int space address to "a"
    // int *a = new int;
    // // delete dynamic memory space
    // delete a;
    // a = nullptr; // delete 完習慣重新記成nullptr
    // // allocation a int space address to "a" and init as 5
    // int *a = new int(5);
    // delete a;
    // a = nullptr;
    // // allocation a int array[5] space and the first address as "a"
    // int *a = new int[5];
    // delete [] a; // 無[]會只delete一個int space (4 bytes)
    // a = nullptr;

    int r = 3;
    //做一個二維陣列，每一個位置指向另一個array指標
    int **array = new int*[r];
    for(int i=0; i < r; i++) {
        array[i] = new int[i+1];
        for(int j=0; j <= i; j++) {
            array[i][j] = j+i;
        }
    }
    print(array, r);
}