#include <bits/stdc++.h>
using namespace std;
int main()
 {
   int arr[] = {2, 4, 1, 3, 8, 5, 6};
   multiset<int> check(arr, arr + 7);
   cout<<"List is : ";
   for (auto i = check.begin(); i != check.end(); i++)
      cout << *i << " ";
   cout<<"\nStarting Element is : "<<*(check.begin());
   return 0;
}
