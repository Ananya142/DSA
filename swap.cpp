#include<iostream>
using namespace std;
void swap_number(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x, y;
    cout<<"enter the value of x and y: ";
    cin>>x>>y;
    int *ptr1=&x;
    int *ptr2=&y;
    swap_number(ptr1, ptr2);
    cout<<"after swapping: "<<endl;
    
    cout<<x<<" "<<y;


    return 0;
}