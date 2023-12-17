#include<iostream>
using namespace std;
int main()
{
int ch;

cout<<"enter 1 for 1-25"<<endl;
cout<<"enter 2 for 26-50"<<endl;
cout<<"enter 3 for 51-75"<<endl;
cout<<"enter 4 for 76-100"<<endl;


cout<<"enter your choice:"<<endl;
cin>>ch;

switch(ch)
{
    case1:
    {
       cout<<"value in between 1-25";
        break;
    }

    case2:
    {
        cout<<"value in between 26-50";
        break;
    
    }

     case3:
     {
        cout<<"value in between 51-60";
        break;
     }
     case4:
     {
        cout<<"value in between76-100 ";
        break;
     }
     default:{
        cout<<"wrong input";
     }

}

return 0;
}