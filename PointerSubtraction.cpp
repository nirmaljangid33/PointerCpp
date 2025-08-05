#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b =10;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout<<"A is : "<<a<<endl;//10
    cout<<"B is : "<<b<<endl;//10

    *ptr1=*ptr2-*ptr1;
    cout<<"A is : "<<*ptr1<<endl;//0
    return 0;
}