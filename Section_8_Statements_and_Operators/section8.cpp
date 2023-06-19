/*
Expressions: a sequence of operators to return a value
    1. Literal
    2. Variable
    3. Mathematics
    4. Relational
    5. Assignment

Statements: a complete line of code that performs some action

    1. Declaration
    2. Assignment
    3. Expression
    4. Assignment
    5. if statement (comparison or boolean)

Operators: Unary, binary and ternary
    1. Assignment
    2. Arithmetic
    3. Increment / decrement
    4. Relational
    5. Logical
    6. Member access
    7. Other


*/

#include <iostream>

using namespace std;

int main() {

    int num1 {10};
    int num2 {20};

    num1 = 100;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    

/* Multiple assignment operators work from right to left essentially
    num1 = num2 = 1000
    Must be like-type
*/

/*
Arithmetic Operators:
    Same symbols used in every programming language
*/

/* Increment and Decrement*/

int counter {10};
int result {0};

cout << "Counter: " << counter << endl;

result = ++counter; // pre increment which increments prior to assignment to result.  So, both = 11
cout << "Counter: " << counter << endl;
cout << "Result: " << result << endl;
result = counter++; // post increment will increment after assignment. So, result = 11 and counter = 12
cout << "Counter: "  << counter << endl;
cout << "Result: " << result << endl;


/* 
Mixed Type Expressions:
    Conversions: 
        Higher vs lower types
            Can convert from lower to higher
        Type Coercion: conversion of one operand to another data type

        Promotion: Conversion to a higher type
            Used in mathematical expressions
        
        Demotion: conversion to a lower type
            Used with assignment to lower type

*/

int total_amount {100};
int total_number {8};
double average {0.0};

average = total_amount / total_number;
cout << average << endl; // displays 12

average = static_cast<double>(total_amount) / total_number;
cout << average << endl; // displays 12.5


/* 
Equality Comparison:

Use boolalpha to see true and false versus 1 and 0

There are specialized libraries for scientific applications
    ex. 12.0 and 11.9999999999 would evaluate to equal because
        they are stored as approximations
    
*/

/*
Relational Operators
    > great than
    >= greater than or equal to
    < less than
    <= less than or equal to 
    <=> three-way comparison in C++20 which evaluates in which direction is greater

*/

/*
Logical operators
    ! not  negates whatever the operator is assigned to
    && and  only true when both operators are true
    || or  true when either expression is true and is false only when both are false

    Precedence
    not has a higher precedence than and 
    and has a higher precedence than or
*/

/*
Compound assignment operators just include an equal sign and all work the same way 
    a += 1; a = a + 1;
    a *= b + c; a = a * (b + c);
    think of the right hand side as being in parenthesis
*/

/*
Operator Precedence
    Associativity: use the precedence rules when the adjacent operators are different
        Use associativity rules when adjacent operators have the same precedence
        Use parenthesis to absolutely remove doubt (It is best practice)
*/
return 0;
}