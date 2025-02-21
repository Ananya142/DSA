#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    
    for(int j=0;j<=n;j++){
       
        if(max<arr[j]){
            max=arr[j];
        }
        
    }
    cout<<"Max elements of array: "<<max;
}