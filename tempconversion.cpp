#include<iostream>
using namespace std;

int main()
{
 float fahrenheit, celsius;

 cout<<"Enter the temprature in fahrenheit:";
 cin>>fahrenheit;

 celsius = (fahrenheit - 32)*5/9;

 cout<<"temprature in celcius is:" << celsius;
 cin>>celsius;

 cout<<"Enter the temprature in celsius:";
 cin>>celsius;

 fahrenheit = (celsius*9/5)+32;

 cout<<"temprature in fahrenheit is:"<< fahrenheit;

 return 0;
}