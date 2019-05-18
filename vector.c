/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector <int> g1;
   for(int i=1;i<=5;i++)
   {
       g1.push_back(i);
   }
   cout<<"output for begin and end\n";
   for(auto i=g1.begin();i!=g1.end();++i)
   {
       cout<<*i<<" ";
   }
   cout<<endl;
   for(auto i=g1.cbegin();i!=g1.cend();++i)
   {
       cout<<*i<<" ";
   }
  cout<<endl;
   for(auto ir=g1.rbegin();ir!=g1.rend();++ir)
   {
       cout<<*ir<<" ";
   }
   cout<<endl;
   for(auto ir=g1.crbegin();ir!=g1.crend();++ir)
   {
       cout<<*ir<<" ";
   }
    return 0;
    
}

