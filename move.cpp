#include <iostream>
#include <vector>
#include <algorithm> // swap ke liye

using namespace std;

int main() {
    vector<int> vec = {0, 2, 0, 4, 0};
    int j = 0; // Zero ki position track karega

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != 0) {
            swap(vec[i], vec[j]);
            j++;
        }
    }

    // Output
    for (int val : vec) {
        cout << val << " ";
    }
}