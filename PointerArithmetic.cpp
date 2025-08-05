#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b =10;
    int* ptr = &a;

    cout<<"A is : "<<a<<endl;//5
    cout<<"B is : "<<b;//10

    b=*ptr+b;
    cout<<"A is : "<<a<<endl;//5
    cout<<"B is : "<<b;//15
    return 0;
}