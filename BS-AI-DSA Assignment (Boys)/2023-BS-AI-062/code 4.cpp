#include <iostream>
using namespace std;
int main() 
{
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) 
	{
        cout << numbers[i] << " "; 
    }
    return 0;
}