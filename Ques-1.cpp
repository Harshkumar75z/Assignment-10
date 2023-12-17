// Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    int* p1=&a;
    int* p2=&b;
    cout<<(*p1)*(*p2);
}