#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"enter the value of  x and y: ";
    cin>>x>>y;
    int *ptrx=&x;
    int *ptry=&y;
    int result= *ptrx + *ptry;
    cout<<"addition of number is: "<<result;
    return 0;
}