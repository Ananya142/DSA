#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the element in vector: ";
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int count=0;
    int x;
    cout<<"enter the value of x: ";
    cin>>x;
    for(int j=0;j<v.size();j++){
        if(v[j]>x){
            count++;
        }
    }
    cout<<"occurence of element strickly greater than x: "<<count;
}