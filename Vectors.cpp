#include <iostream>
#include <vector>
// Vectors are similar to JS arrays or java arraylists
// They require the <vector> preprocessor directive
using namespace std;

int main()
{
    // We must declare the type
    vector<int> vec = {1, 2, 3};
    // We can't just print vectors like we do in js, it doesn't compile
    // We can loop through instead
    for (int v : vec)
    {
        cout << v << endl;
    }

    // We can also reference specific elements with []
    cout << "vec[1]: " << vec[1] << endl;

    vector<vector<int>> vectorception = {{7}, {3, 5}};

    for (vector<int> v : vectorception)
    {
        cout << "next vector:";
        for (int i : v)
        {
            cout << i << ", ";
        }
        cout << endl;
    }

    for (vector<int> &v : vectorception)
    {
        for (int &i : v)
        {
            i = 1;
        }
    }

    // If we want to manipulate the values, we have to pass the address
    // in the above section, if we remove the & symbols, the array does not get changed

    cout << "after manipulation:" << endl;
    for (vector<int> &v : vectorception)
    {
        cout << "next vector:";
        for (int &i : v)
        {
            cout << i << ", ";
        }
        cout << endl;
    }

    vector<int> empty;                                 // empty vector of ints
    vector<int> create(4, 100);                        // four ints with value 100
    vector<int> iterate(create.begin(), create.end()); // iterating through second
    vector<int> copy(iterate);                         // a copy of third

    for (int i = 0; i < copy.size(); i++)
    {
        cout << i << "th element of they copy vector: " << copy[i] << endl;
    }

    // the iterator constructor can also be used to construct from arrays.
    // here is a really annoying to read example if you have some free time:
    int myints[] = {16, 2, 77, 29};
    vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

    cout << "The contents of fifth are:";
    for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    return 0;
}