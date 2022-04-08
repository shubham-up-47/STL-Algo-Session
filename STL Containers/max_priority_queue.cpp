#include <bits/stdc++.h>
using namespace std;

 
int main()
{  
	priority_queue<int> p;                                       // max priority queue
 
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
    
	cout<<"Max element: "<<p.top()<<endl;                        // getMax/top
	
    cout<<"Max priority queue elements (in sorted order): ";
    while(!p.empty())
    {  cout<<p.top()<<" ";
	   p.pop();  }                                               // delete/pop 
}

	                                                                                          
 /*
  
  8 12 6 5 100 1 9 0 14    
         
           100            
           / \ 
          /   \ 
        14     12     (Max Heap) = (Complete Binary Tree + Heap Order Property), (last level is filled left to right), (parent data > child data)
        /\     /\
       /  \   /  \
      9    6 5    1       
     /		
	/
   0
   		 	 
  pq[] = {100,14,9,12,1,5,0,6}    (Max Priority Queue) = (Highest Priority First Out), (O(logn)), (Root=Max element), (stored in array)                                           
 
 */
 
 
 




