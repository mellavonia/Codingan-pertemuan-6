#include <iostream>
using namespace std;

int main() {
    int data[] = {5, 2, 4, 1, 3};
    int n = 5;
    // 1, 2, 4, 5, 3

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[minIndex]) { // 3 < 1?
                minIndex = j; // 3 = data nya nilai 1
            }
        }

        swap(data[i], data[minIndex]); // 0 swap 3
    }

    cout << "Hasil Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}