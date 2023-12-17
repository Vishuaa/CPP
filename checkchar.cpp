#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"enter your number:"<<endl;
cin>>n;

if(n>=65 && n<=90)
{
    cout<<"entered number is an upper case letter:"<<endl;
}
else if(n>=97 && n<=122 ) 
{
    cout<<"entered number is lower case letter:"<<endl;
 }
 else if(n>=48 && n<=57)
 {
  cout<<"entered number is a digit:"<<endl;
 }
 else
 {
    cout<<"entered number is special chracter:"<<endl;
 }
 
return 0;
}