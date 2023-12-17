#include<iostream>
using namespace std;
int main()
{
int n, i;
cout<<"enter your number";
cin>>n;

for( i = 1; i<=n; i++)
{
   for(i%2==1; i<=n; i++)
   {
    for(int j=1; j<=(2*i)-1; j--)
    {
        cout<<"* ";
    }
   }
    cout<<endl;
}



return 0;
}