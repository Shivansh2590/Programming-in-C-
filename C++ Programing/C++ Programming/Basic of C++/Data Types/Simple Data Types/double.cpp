/*This is the program  of double datatype demonstration*/
/*Stores double-precision floating-point numbers for more decimal precision.*/

#include<iostream>
using namespace std;

int main()
{
    double a, b, c, avg;
    cout<<"Enter Any three number :";
    cin>>a>>b>>c;

    avg =  (a+b+c)/3;

    cout<<"The average is :"<<avg;
    return 0;
}