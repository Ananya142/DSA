#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,10,16};
    int size=7;
    int cnt=0;
    int target_sum;
    cout<<"enter the target sum: ";
    cin>>target_sum;
    cout<<"number of triplets: ";
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if((arr[i]+arr[j]+arr[k])==target_sum){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
}