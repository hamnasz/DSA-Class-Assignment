#include <iostream>
using namespace std;

int main() {
   	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"\nEnter the elements of array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    cout << "\nReversed array: ";
    for(int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
