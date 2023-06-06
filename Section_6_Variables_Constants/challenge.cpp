#include <iostream>

using namespace std;

int main(){
    const double small_room_price {25};
    const double large_room_price {35};
    const double tax_rate {0.06};
    const double valid_thru {30};
    int num_small_rooms {0};
    int num_large_rooms {0};

    cout << "Welcome to Frank's Carpet Cleaning Service!" << endl;
    cout << "Charges:\n\t$" << small_room_price << " per small room" << endl;
    cout << "\t$" << large_room_price << " per large room" << endl;

    cout << "How many small rooms would you like to have cleaned? " << endl;
    cin >> num_small_rooms;

    cout << "How many large rooms would you like to have cleaned? " << endl;
    cin >> num_large_rooms;

    //Variables DO NOT update will in Python.  They need to be declared after numbers are above zero
    double total_room_cost = (num_small_rooms * small_room_price) + (num_large_rooms * large_room_price);
    double tax_total = total_room_cost * tax_rate;

    // Clean up code by separating all of this out for readability
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << num_small_rooms << endl;
    cout << "Number of large rooms: " << num_large_rooms << endl;
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
    cout << "Cost: $" << total_room_cost << endl;
    cout << "Tax: $" << tax_total << endl;
    cout << "==========================================" << endl;
    cout << "Total estimate: $" << total_room_cost + tax_total << endl;
    cout << "This estimate is valid for " << valid_thru << " days" << endl;


    return 0;
}