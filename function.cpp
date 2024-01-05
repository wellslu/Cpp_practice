#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int add(int, int);

double add(double, double=3.14);

// void swap(int []);

// call by reference
void swap(int &, int &);

// call by pointer
void swap(int *, int *);

int sub(int m1, int m2) {
    return m1 - m2;
}

int main() {
    int i = 3, j = 4, o1, o2;
    o1 = add(i, j);
    o2 = sub(i, j);
    cout << o1 << ", " << o2 << endl;

    // int swap_list[2] = {o1, o2};
    // swap(swap_list);
    // cout << swap_list[0] << ", " << swap_list[1] << endl;

    // 取址
    cout << &o1 << endl;
    // call by reference
    swap(o1, o2);
    // call by pointer
    // swap(&o1, &o2);
    cout << o1 << ", " << o2 << endl;

    double id = 3.1, jd = 4.3, od;
    od = add(id, jd);
    cout << od << endl;
    od = add(id);
    cout << od << endl;

    int sum=0, t;
    while(cin >> t){
        sum+=t;
    }
    cout << sum << endl;

    srand(777);
    int rn = 0;
    for(int i=0; i<10; i++) {
        rn = rand();
        cout << rn << ", ";
    }
    cout << endl;
    cout << time(nullptr) << endl;

    return 0;
}

// void swap(int m_list[]){
//     int temp = m_list[0];
//     m_list[0] = m_list[1];
//     m_list[1] = temp;
// }

// call by reference
void swap(int &m1, int &m2){
    // m1 address = o1 address
    cout << &m1 << endl;
    int temp = m1;
    m1 = m2;
    m2 = temp;
}

// call by pointer
void swap(int *m1, int *m2){
    // m1 address = o1 address
    cout << m1 << endl;
    int temp = *m1;
    *m1 = *m2;
    *m2 = temp;
}

int add(int m1, int m2) {
    return m1 + m2;
}

double add(double m1, double m2) {
    return m1 + m2;
}