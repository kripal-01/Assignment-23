// 10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
int i,a[10],s=0;
for(i=0;i<10;i++)
{
    cin>>a[i];
s+=a[i];
}
cout<<"sum of array is  "<<s;
    return 0;
}
