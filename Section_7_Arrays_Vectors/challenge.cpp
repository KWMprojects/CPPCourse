#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "The elements of vector1 are: " << vector1.at(0)
        << " " << vector1.at(1) << "\n Size: " << vector1.size()
        << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "The elements of vector2 are: " << vector2.at(0)
        << " " << vector2.at(1) << "\n Size: " << vector2.size()
        << endl;

    vector <vector<int>> vector2d;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << vector2d.at(0).at(0) << endl;
    cout << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << endl;
    cout << vector2d.at(1).at(1) << endl;

    cout << "The elements of vector1 are: " << vector1.at(0)
        << " " << vector1.at(1) << "\n Size: " << vector1.size()
        << endl;

    //vector2d is not updated with the new value
    //You need to make changes to the 2d vector after initialization.
    //C++ doesn't utilize objects that update automatically
}