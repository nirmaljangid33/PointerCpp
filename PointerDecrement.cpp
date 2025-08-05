#include<iostream>
using namespace std;
int main(){
    int num = 10;
    int* ptr  = &num;
    cout<<"ptr is "<<ptr<<endl; // 0x61ff08
    cout<<"&num  is "<<&num<<endl; // 0x61ff08
    ptr--;
    cout<<"ptr is "<<ptr<<endl; //ptr is 0x61ff04
     cout<<"&num  is "<<&num<<endl;// 0x61ff08
     return 0;
}