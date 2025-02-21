#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the size of array: ";
    cin>>n;
   
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
   
    
    for(int j=0;j<=n;j++){
        sum=sum+arr[j];
        
    }
    cout<<"Sum od elements of array: "<<sum;
}