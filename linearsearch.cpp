#include <iostream>
using namespace std;

int main() {
    int n, search;
    
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; 

    cout << "Enter the elements of the array: ";
    for (int i = 0; i <= n; i++) {  
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> search;

    bool found = false;

    for (int j = 0; j <=n; j++) {  
        if (arr[j] == search) {
            cout << "Element found at index " << j << endl;
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
