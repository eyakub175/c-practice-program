#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1{1,3,4,5};

    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1.at(i)<<endl;

    }
    return 0;

}
