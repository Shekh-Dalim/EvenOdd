/************** Q:2:  Even and Odd *************/

#include <iostream>
using namespace std;

// 1-> Even
// 0-> odd
bool isEven(int n){

    if(n & 1 ){
     return 0; //odd
    }
    else{
        return 1; // even
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}
