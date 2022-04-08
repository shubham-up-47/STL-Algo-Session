#include <bits/stdc++.h> 
using namespace std;


struct Interval
{
	int st;                                                         // start time 
	int et;                                                         // end time
};


bool compare(Interval i1, Interval i2)
{	return (i1.st < i2.st);   }
 

int main()
{ 
    Interval arr[] = {{6,4}, {3,4}, {4,6}, {8,13}};                 // 2D array
    sort(arr, arr+4, compare);                                      // sorting in increasing order of "st"
	
    for(int i=0; i<4; i++)
    cout<<"("<< arr[i].st <<","<< arr[i].et <<") ";   
}












