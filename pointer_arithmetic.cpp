#include<iostream>
using namespace std;
int main(){
    int x=10;
    double db=89.99;
    int *ptr1=&x;
    double *ptr2=&db;
    cout<<"size of x: "<<sizeof(x)<<endl;
    cout<<"size of db: "<<sizeof(db)<<endl;
    cout<<ptr1<<" "<<(ptr1+1)<<endl; // increment by +4 as the size of integer is 4
    cout<<ptr2<<" "<<(ptr2-1)<<endl; // decrement  by -8 as the size of double is 8
    cout<<ptr1<<" "<<(ptr1+2)<<endl;
    int arr[]={2,9};
    int *ptr =&arr[0];
    cout<<" return the address of first array elemnt: "<<ptr<<endl;;
    cout<<"increase the value of array's first elemt using dereference oprator: "<<++ *ptr<<endl ;
    cout<<"accessing the value of array elemnt using pointer arithemic: " <<*(arr +0)<<" "<<*(arr +1)<<endl;
    return 0;
}