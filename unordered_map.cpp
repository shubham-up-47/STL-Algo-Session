#include <bits/stdc++.h>
using namespace std;

 // Unordered Map = 2D Table of (Key,Value)                                            
 
int main()
{
	unordered_map<string,int>  h;                                                  // (Key,Value) = (string,int)
		 
	h["abc"] = 1;                                                                  // insertingNewValue 
	h["xyz"] = 8;  
	h["ghi"] = 3;                                                        
	  
	cout<<h.size()<<endl;                                                          // size 
	
	cout<<"Value of Key 'abc': "<<h["abc"]<<endl;                                  // getValue                      
	  
	h.erase("ghi");                                                                // delete  
	
	if(h.count("ghi") > 0)                                                         // search
	cout<<"'ghi' is present"<<endl;
	else
	cout<<"'ghi' is absent"<<endl;
}

  
/*

  [Key]   [Value]
  
   abc       1
   xyz       8       
   ghi       3
 
 
    ->    Unordered Hash Map     { O(1) }
    
*it doesn't allow duplicate keys & default value of new key is 0   
*implemented using Hash Table conept                                  
*it's each node stores (Key,Value)                                           
*datatype of Key & Value is decided by us
*highly optimized datastructure but data stored in it is unordered 
   
*/





 

