#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<"address of x: "<<&x<<endl;
    //to store the address we pointer
    //x is integer variable, pointer is also of integer data type
    int *ptr=&x;
    cout<<"address store inside the ptr: "<<ptr<<endl; // address of variable
    cout<<"value of variable whose address ptr store: "<<*ptr<<endl; //dereference oprator- print value of variable
    *ptr =50; // updating value using ptr
    cout<<"updated value of x: "<<x<<endl;
    cout<<"address of ptr itself: "<<&ptr<<endl;
}
   