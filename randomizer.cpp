#include <iostream>

using namespace std;

struct Randomizer{
    int a;
    int b;
    int c;
    int cur;
    int rand();
};
int Randomizer::rand(){
    cur = (a * cur + b) % c;
    return cur;
}

int main() {
    Randomizer r1 = {10, 4, 31, 0};
    for(int i=0; i < 10; i++){
        cout << r1.rand() << ", ";
    }
    cout << endl;
    Randomizer r2 = {10, 7, 32, 0};
    for(int i=0; i < 10; i++){
        cout << r2.rand() << ", "; // 餘數永遠為17
    }
    cout << endl;
    return 0;
}