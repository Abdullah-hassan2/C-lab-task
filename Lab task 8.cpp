// pointer_demo.cpp
#include <iostream>
using namespace std;
int main() {
    int num = 10;
    int *ptr = &num;
    cout << "Value: " << num << endl;
    cout << "Address: " << &num << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Value through Pointer: " << *ptr << endl;
    return 0;
}
