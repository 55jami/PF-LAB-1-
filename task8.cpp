#include<iostream>
using namespace std;
main()
{
float megabytes;
float kbs;
float bytes;
float bits;


cout<<"Enter the value of megabytes:";
cin>>megabytes;
kbs=megabytes*1024;
cout<<"In kbs:"<<kbs<<endl;
bytes=kbs*1024;
cout<<"In bytes:"<<bytes;
bits=bytes*8;
cout<<"In bits:"<<bits;
}