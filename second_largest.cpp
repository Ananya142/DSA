#include<iostream>
using namespace std;
int second_largest(int arr[], int n){
    int max=arr[0];
    
    int second_lar;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
          
        }
    }

   for(int i=0;i<n;i++){
    if(arr[i]>second_lar && arr[i]!=max){
        second_lar=arr[i];
    }
   }
   return second_lar;
}
int main(){
    int arr[]={1,5,8,99,4,41};
    int n=6;

   cout<<"second largrest element: "<<second_largest(arr,n);
}