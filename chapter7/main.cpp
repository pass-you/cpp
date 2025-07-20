#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << *p << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;

    cout << typeid(p) << endl;
    cout << typeid(*p) << endl;
    return 0;
}