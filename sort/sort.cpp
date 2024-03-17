#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//declare and define an array
	int arr[]={42, 0 , 0, 42};

	//size of the array
	//total size/size of an element
	int size = sizeof(arr)/sizeof(int);

	//calling sort() to sort array elements
	sort(arr, arr+5);

	//printing sorted elements
	cout<<"Sorted elements are: ";

	for(int i=0; i<size; i++)

		cout<<arr[i]<<" ";

	return 0;
}
