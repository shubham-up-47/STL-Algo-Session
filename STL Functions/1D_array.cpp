#include <bits/stdc++.h>
using namespace std;

 
void printArray(int *arr, int n)
{
	for(int i=0; i<n; i++)
	cout<< arr[i] <<" "; 
	cout<< endl;
}


int main()
{
	int n=7, arr[]={2,1,3,5,4,7,6};                                 // 1D array
    
	sort(arr, arr+n, greater<int>());                               // sorting in decreasing order
    printArray(arr, n);
	
	sort(arr, arr+n);                                               // sorting in increasing order
    printArray(arr, n);
	 
	cout<< "Is 2 present = " << binary_search(arr, arr+n, 2) <<endl;  // searching 2 by binary search  
	cout<< lower_bound(arr, arr+n, 3) - arr <<endl;                 // returns iterator pointing to 1st element which has value >= 3  {O(logn)}
	cout<< upper_bound(arr, arr+n, 3) - arr <<endl;                 // returns iterator pointing to 1st element which has value > 3   {O(logn)} 
}












