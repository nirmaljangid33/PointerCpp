#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr = &a;
    cout<<"before :"<<*ptr;//10
    *ptr = 20;
       cout<<"After :"<<*ptr;//20
} 