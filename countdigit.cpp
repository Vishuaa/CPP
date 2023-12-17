#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the number:"<<endl;
cin>>n;

int c=0;

while(n>0)
{
  n=n/10;
  c++;
}
cout<<" coutned digit"<<" = "<<c;

return 0;
}