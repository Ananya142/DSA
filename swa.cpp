#include<iostream>
using namespace std;
int swap(int arr[],int i,int j){
    while(j>i){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
}


int main() {
    int arr[]={1,2,3,4,5,6,7};
    swap(arr, 0,3);
    swap(arr,4,6);
    swap(arr, 0,6);

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i];
    }
    
    
    
}
