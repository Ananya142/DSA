//count number of digit
#include<iostream>
using namespace std;
int digitcount(int num){
     int lastdigit,cnt=0;
while(num>0){
    lastdigit=num%10;
    cnt=cnt+1;
    num=num/10;
    }
    return cnt;
}
int main(){
int num;
cout<<"enter the number: "<<" ";
cin>>num;
cout<<"number of digit in a number:  "<<digitcount(num);
return 0;
}
