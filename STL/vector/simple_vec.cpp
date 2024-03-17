#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int>  v;
    v.push_back(1);  //insert 1 at the back of v
    v.push_back(2);  //insert 2 at the back of v
    v.push_back(4);  //insert 3 at the back of v

    for(vector<int>::iterator i = v.begin();  i != v.end();  i++)
    {
          cout << *i <<" ";   // for printing the vector
    }
}
