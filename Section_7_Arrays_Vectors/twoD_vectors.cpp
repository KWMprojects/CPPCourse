#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    //Accessing rating
    cout << "Movie rating in [0][0]: " << movie_ratings.at(0).at(0) << endl;
    //YOU CAN STILL USE ARRAY SYNTAX!!!!!!
    //
}