#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"enter the three digit number:";
cin>>n;
int a,b,c;

a= n%10;
b= (n/10)%10;
c= (n/100);


int reversednumber = 100*a + 10*b + c;

int difference = n - reversednumber;

cout<<"the difference between n and it's reversednumber is:"<<difference;


return 0;
}