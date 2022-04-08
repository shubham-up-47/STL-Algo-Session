#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   queue<int> q;                                                            // inbuilt queue (FIFO data structure)
    
   q.push(12);                                                              // insert/push
   q.push(100);
   q.push(25);
	     
   for(int i=0; i<3; i++)
   {  cout<<q.front()<<endl;                                                // front
      q.pop();   }                                                          // delete/pop
      
   cout<<q.size()<<endl;                                                    // size  
   
   if(q.empty()==true)                                                      // queue is empty or not
   cout<<"Queue is empty"<<endl;
   else
   cout<<"Queue is not empty"<<endl;      
}






 


