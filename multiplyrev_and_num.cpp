#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the three digit";
cin>>n;
int a, b, c, product;

a=n%10;
b=(n/10)%10;
c=n/100;

int reversednumber = 100*a + 10*b + c;

cout<<"the reverse number is"<<reversednumber;
cin>>reversednumber;

 product = reversednumber * n;
 cout<<"the product of"<<reversednumber<<" and n is:"<<product;



return 0;
}