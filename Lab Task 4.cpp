// array_sum.cpp
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum: " << sum;
    return 0;
}
