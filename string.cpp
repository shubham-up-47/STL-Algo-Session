#include <bits/stdc++.h>
using namespace std;

 
int main()
{
   string s="ancdefd";                  // string

   cout<<s.size()<<endl;                // returns string length
   cout<<s.substr(1)<<endl;             // returns substring of s having (startIndex=argument1) upto end              
   cout<<s.substr(2,3)<<endl;           // returns substring of s having (startIndex=argument1) & (length=argument2)                                  
   cout<<s.find("cdef")<<endl;          // returns startIndex of input substring present in s 

   string s1="ab", s2="bc", s3;         
   s1 = s1 + s2 + s[0] + 'a' + "a";     // string catenation 
   cout<<s1<<endl;
}








