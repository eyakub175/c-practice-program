#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>v1 {10,20,30,40};
    vector<int>iterator:: it = v.begin();

    v.erase(it);   //removes first element from the vector

    v.erase(v1.begin(), v1.end() - 2 )
    /*removes all the elements except last two */

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it <<" ";   // for printing the vector
    }
}
