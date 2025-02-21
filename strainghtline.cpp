#include<iostream>
#include<math.h>
using namespace std;
void straight_line(int x1, int x2, int x3, int y1, int y2, int y3){
    int x= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    int y= sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2) * 1.0);
    int z= sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2) * 1.0);
    if(x+y==z){
        cout<<"points lies in straight line";
    }else if(y+z==x){
        cout<<"points lies in straight line";
    }
    else if(z+x==y){
        cout<<"points lies in straight line";
    }
    else{
        cout<<"not lies in straight line ";
    }
}

    int main(){
        int x1, x2, x3, y1, y2, y3;
        cout<<"enter yhe value of x1, x2, x3 ";
        cin>>x1>>x2>>x3;
        cout<<"enter the value of y1, y2, y3";
        cin>>y1>>y2>>y3;
        straight_line(x1, x2, x3, y1, y2, y3);
        return 0;
    }
