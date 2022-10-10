// 8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
int a=5, b=10;
a=a+b;
b=a-b;
a=a-b;
cout<<"value of a = "<<a<<endl<<"value of b= "<<b;
    return 0;
}
