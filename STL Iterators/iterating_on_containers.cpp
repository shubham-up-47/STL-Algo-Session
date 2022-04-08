#include <bits/stdc++.h>
using namespace std;

 
int main()
{   
  vector<int> v = {6,1,3,9,2};
	vector<int>::iterator it;

	for(it=v.begin(); it!=v.end(); it++)                     // iterating on vector
	cout<<*it<<" ";
	cout<<endl;
	
	
	
	unordered_map<int,int> h = {{2,3}, {5,6}, {7,1}};
	unordered_map<int,int>::iterator iter;
	
	for(iter=h.begin(); iter!=h.end(); iter++)               // iterating on unordered map
	cout<<"("<<iter->first << "," << iter->second<<") "; 
	cout<<endl;
	
	
	
	unordered_set<int> s = {2,3,6,7,1};                       
	unordered_set<int>::iterator itr;
	
	for(itr=s.begin(); itr!=s.end(); itr++)                  // iterating on unordered set
	cout<<*itr<<" "; 
	cout<<endl; 
}





