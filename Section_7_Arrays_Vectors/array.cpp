#include <iostream>

using namespace std;

int main() {
    /* Array Declaration
    // Element_Type array_name [number of elements] {init list}
    // int test_scores [5];
    // int high_score_per_level [10];

    // int high_score_per_level [10] {3,5};  init to 3,5 and remaining to 0
    // double hi_temp [days_in_year] {0}; all init to zero
    // int another_array [] {1,2,3,4,5}; size automatically calculated
    
    // Accessing array elements
        array_name [element_index]

        first element of the array has the pointer in memory
        Remember - no bound checking!
    */
   char vowels[] {'a','e','i','o','u'};
   cout << "\nThe first vowel is " << vowels[0] << endl;
   cout << "The last vowel is " << vowels[4] << endl;

   double hi_temps[] {115, 117, 114, 111};
   cout << "\nThe first high temp is " << hi_temps[0] << endl;
   hi_temps[0] = 118;
   cout << "\nThe first high temp is " << hi_temps[0] << endl;

   //ALWAYS INITIALIZE AN ARRAY with {}

   int test_scores [5] {};
   cout << "\nEnter 5 test scores: " << endl;
   cin >> test_scores[0];
   cin >> test_scores[1];
   cin >> test_scores[2];
   cin >> test_scores[3];
   cin >> test_scores[4];

   cout << "Test scores are as follows: " << endl;
   cout << test_scores[0] << endl;
   cout << test_scores[1] << endl;
   cout << test_scores[2] << endl;
   cout << test_scores[3] << endl;
   cout << test_scores[4] << endl;

    return 0;
}