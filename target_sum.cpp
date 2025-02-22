#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,6,7,8};
    int target_sum=9;
    int pair=0;
    cout<<"pairs availalible are: ";
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if((arr[i]+arr[j])==target_sum){
                pair++;
                cout<<arr[i]<<arr[j]<<" "<<endl;
                
            }
        }
    }
    cout<<"numbers of pairs: "<<pair;
}