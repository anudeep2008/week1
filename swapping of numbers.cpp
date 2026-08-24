#include<iostream>
using namespace std;
void swapref(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapptr(int *a,int  *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 int main(){
    int x=10,y=20;
    swapref(x,y);
    cout<<"After swapping using reference: x="<<x<<" y="<<y<<endl;
    swapptr(&x,&y);
    cout<<"After swapping using pointer: x="<<x<<" y="<<y<<endl;    
    
    int&alias=x; 
    alias=90; 
    cout<<"After aliasing: x="<<x<<endl;
    return 0;
 }