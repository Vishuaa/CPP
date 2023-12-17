#include<iostream>
using namespace std;
int main()
{
int ch;

cout<<"Press 1 for Janury"<<endl;
cout<<"Press 2 for Feburary"<<endl;
cout<<"Press 3 for March"<<endl;
cout<<"Press 4 for April"<<endl;
cout<<"Press 5 for May"<<endl;
cout<<"Press 6 for June"<<endl;
cout<<"Press 7 for July"<<endl;
cout<<"Press 8 for August"<<endl;
cout<<"Press 9 for September"<<endl;
cout<<"Press 10 for October"<<endl;
cout<<"Press 11 for November"<<endl;
cout<<"Press 12 for December"<<endl;

cout<<"Enter your choice:"<<endl;
cin>>ch;

switch(ch)
{
    case1:
    {
       cout<<"Entered digit represents month January.";
        break;
    }

    case2:
    {
        cout<<"Entered digit represents month Feburary.";
        break;
    
    }

     case3:
     {
        cout<<"Entered digit represents month March.";
        break;
     }
     case4:
     {
        cout<<"Entered digit represents month April.";
        break;
     }
     cout5:
     {
        cout<<"Entered digit represents month May.";
        break;
     }
     case6:
     {
        cout<<"Entered digit represents month June.";
        break;
     }
     case7:
     {
        cout<<"Entered digit represents month July.";
        break;
     }
     case8:
     {
        cout<<"Entered digit represents month August.";
        break;
     }
     case9:
     {
        cout<<"Entered digit represents month September.";
        break;
     }
     case10:
     {
        cout<<"Entered digit represents month October.";
        break;
     }
     case11:
     {
        cout<<"Entered digit represents month November.";
        break;
     }
     case12:
     {
        cout<<"Entered digit represents month December.";
        break;
     }


    default:{
        cout<<"wrong input";
     }

}
return 0;
}