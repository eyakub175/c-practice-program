#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 {10,20,30,40};

    v1.pop_back();

    vector<int>::iterator it;

    for(it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it <<" ";   // for printing the vector
    }
}
