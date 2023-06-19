#include <iostream>

using namespace std;
// Works with zero and change inputs
// Does not work with large numbers as a result of int versus long
// Does not check user input errors
int main(){
    int change {};
    int dollars {};
    int quarters {};
    int dimes {};
    int nickels {};
    int pennies {};

    cout << "Enter an amount in cents: " << endl;
    cin >> change;

    dollars = change / 100;
    change %= 100;
    quarters = change / 25;
    change %= 25;
    dimes = change / 10;
    change %= 10;
    nickels = change / 5;
    change %= 5;
    pennies = change;

    cout << "You can provide change for this change as follows:"
        << "\ndollars: " << dollars
        << "\nquarters: " << quarters
        << "\ndimes: " << dimes
        << "\nnickels: " << nickels
        << "\npennies: " << pennies
        << endl;



}