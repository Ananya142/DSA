#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,6,7,96};
    bool sort=true;
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            bool sort=false;
        }

    }
    if(sort!=true){
        cout<<"not sorted";

    }else{
        cout<<"sorted";
    }

    }
