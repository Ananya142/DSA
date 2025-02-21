#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v(5);
    cout << "Enter the elements: ";
    
    for(int i = 0; i <=5; i++) {
        cin >> v[i]; 
    }

    int x;
    cout << "Enter the element whose last occurrence is to be checked: ";
    cin >> x;

    int lastIndex = 1; 
    
    for(int j = 0; j <=5; j++) {
        if(v[j] == x) {
            lastIndex = j; 
        }
    }

        cout << "Last occurrence of element is at index " << lastIndex << endl;
    
    return 0;
}
