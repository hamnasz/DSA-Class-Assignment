#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4};

    cout << "The numbers in the array are:\n";
    for (int i = 0; i < 4; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}