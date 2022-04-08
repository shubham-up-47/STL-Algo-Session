#include <bits/stdc++.h>
using namespace std;


int main()
{
   stack<int> s;                                                            // inbuilt stack (LIFO data structure)
    
   s.push(12);                                                              // insert/push
   s.push(100);
   s.push(25);

   for(int i=0; i<3; i++)            
   {  cout<<s.top()<<endl;                                                  // top
      s.pop();  }                                                           // delete/pop
        
   cout<<s.size()<<endl;                                                    // size
   
   if(s.empty()==true)                                                      // queue is empty or not
   cout<<"Stack is empty"<<endl;
   else
   cout<<"Stack is not empty"<<endl;  
}






 


 

