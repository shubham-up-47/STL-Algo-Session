#include <bits/stdc++.h>
using namespace std;

 // Unordered Set = set of distinct keys                                           
 
int main()
{
	unordered_set<int>  s;                                                         // unordered set
		 
	s.insert(4);                                                                   // insert
	s.insert(11);
	s.insert(4);
	s.insert(9);
	s.insert(11);                                                      
	  
	cout<<s.size()<<endl;                                                          // size 
	 
	s.erase(9);                                                                    // delete  
	
	if(s.count(9) > 0)                                                             // search
	cout<<"'9' is present"<<endl;
	else
	cout<<"'9' is absent"<<endl;
}






