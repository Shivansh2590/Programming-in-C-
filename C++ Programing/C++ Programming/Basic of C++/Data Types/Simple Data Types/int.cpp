/*This is the program  of int datatype demonstration*/
/*Integer datatype take input and give output above decimal point*/

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, avg;
    cout<<"Enter Any three number :";
    cin>>a>>b>>c;

    avg =  (a+b+c)/3;

    cout<<"The average is :"<<avg;
    return 0;
}