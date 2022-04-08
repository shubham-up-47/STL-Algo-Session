#include <bits/stdc++.h>
using namespace std;

 
int main()
{  
	priority_queue<int, vector<int>, greater<int>> p;            // min priority queue
 
	p.push(8);	                                                 // insert
 	p.push(12);
	p.push(6);
	p.push(5);
	p.push(100);
	p.push(1);
	p.push(9);
	p.push(0);
	p.push(14);

    cout<<p.size()<<endl;                                        // size
    
	cout<<"Min element: "<<p.top()<<endl;                        // getMin/top
	
    cout<<"Min priority queue elements (in sorted order): ";
    while(!p.empty())
    {  cout<<p.top()<<" ";
	   p.pop();  }                                               // delete/pop 
}

          
		                                                                                          
 /*
  
  8 12 6 5 100 1 9 0 14    
  
            0            
           / \ 
          /   \ 
         5     1      (Min Heap) = (Complete Binary Tree + Heap Order Property), (last level is filled left to right), (parent data < child data)
        /\     /\
       /  \   /  \
     100  12 9    6       
     /		
	/
   14
   	
  pq[] = {0,5,1,14,12,9,6,100} 	  (Min Priority Queue) = (Lowest Priority First Out), (O(logn)), (Root=Min element), (stored in array)                                   
 
 */
 
 
  








