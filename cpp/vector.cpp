#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create a vector of Intergers
    vector<int> n;

    // add elements to the vector
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);

    // Print the Element using a range-based loop
    cout << " Elements in the Vector:  ";
    for (int num : n)
    {
        cout << num << "";
    }
    cout << endl;
    // ACcess elements using index at();
    int firstElement = n[0];
    int secondElement = n.at(1);
    cout << "First element: " << firstElement << std::endl;
    cout << "Second element: " << secondElement << std::endl;

    // Get the size Of the vector
    int size = n.size();

    cout << "size of the vector" << size << endl;

    // Removing the last element
    n.pop_back();
    cout << "Vector after popping the last element: ";
    for (int num : n)
    {
        cout << num << " ";
    }
    cout << endl;

    // Clear the vector
    n.clear();
    cout << "Vector after clearing: ";
    for (int num : n)
    {
        cout << num << " "; // This loop won't execute since the vector is empty
    }
    cout << endl;
}