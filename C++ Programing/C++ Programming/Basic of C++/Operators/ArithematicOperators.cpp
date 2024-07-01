// C++ program to illustrate the arithmatic operators
#include <iostream>
using namespace std;

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    cout<<"\n a + b ="<< a + b;                                    //Addition              :- Adds two numeric values.
    cout<<"\n a - b ="<< a - b;                                    //Subtraction           :- Subtracts right operand from left operand.
    cout<<"\n a * b ="<< a * b;                                    //Multiplication        :- Multiply two numeric values.
    cout<<"\n a / b ="<< a / b;                                    //Division              :- Divide two numeric values.
    cout<<"\n a % b ="<< (a % b);                                  //Modulus               :- Returns the remainder after diving the left operand with the right operand.
    cout<<"\n +a ="<< +a;                                          //Unary Plus            :- Used to specify the positive values.
    cout<<"\n -a ="<< -a;                                          //Unary Minus           :- Flips the sign of the value.
    cout<<"\n a++ ="<< a++;                                        //Increment             :- Increases the value of the operand by 1.
    cout<<"\n a-- ="<< a--;                                        //Decrement             :- Decreases the value of the operand by 1.

    return 0;
}
