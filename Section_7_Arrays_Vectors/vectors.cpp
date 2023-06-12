#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
    Container in the C++ STL
    Can grow and shrink (Dynamic)
    Elements are all the same type
    Stored contiguously in memory 
    

    Declaration
    #include <vector>
    using namepace std;

    vector <char> vowels (5);
    vector <int> test_scores (10);

    */

   //Accessing vector elements: vector_name.at(element_index)

   vector <int> test_scores {100,95,99,7,88};
   cout << "First score at index 0: " << test_scores.at(0) << endl;
   cout << "The last element at index 4: " << test_scores.at(4) << endl;
   
   test_scores.at(0) = 99;
   cout << "New first score at index 0: " << test_scores.at(0) << endl;

// Allocating new space

    vector <int> tests_to_average {100, 95, 90};
    tests_to_average.push_back(65);
    cout << tests_to_average.at(0) << endl;
    cout << tests_to_average.at(1) << endl;
    cout << tests_to_average.at(2) << endl;
    cout << tests_to_average.at(3) << endl;

// Some vector methods give you bounds checking depending on which ones
    //vector <char> vowels; // empty
    //vector <char> vowels (5); // Constructed to 5 elements
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels.size() << endl; //method to get size of vector
    

   return 0;

}
