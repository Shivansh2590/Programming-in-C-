/*This is the program  of float datatype demonstration*/
/*Float datatype take input and give output in decimal point*/

#include<iostream>
using namespace std;

int main()
{
    float a, b, c, avg;
    cout<<"Enter Any three number :";
    cin>>a>>b>>c;

    avg =  (a+b+c)/3;

    cout<<"The average is :"<<avg;
    return 0;
}