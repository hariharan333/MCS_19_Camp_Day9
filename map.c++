#include <iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
   map<int,int>g;
   g.insert(pair<int,int>(1,10));
   g.insert(pair<int,int>(2,20));
   g.insert(pair<int,int>(3,30));
   g.insert(pair<int,int>(4,40));
   g.insert(pair<int,int>(5,50));
   
   map<int,int>::iterator it;
   for(it=g.begin();it!=g.end();++it)
   {
       cout<<"\t"<<it->first<<"\t"<<it->second;
       cout<<"\n";
   }
   cout<<"\n";
   map<int,int>g1(g.begin(),g.end());
   cout<<"assigning value form g to g1\n";
   for(it=g1.begin();it!=g1.end();++it)
   {
       cout<<"\t"<<it->first<<"\t"<<it->second;
       cout<<"\n";
   }
   cout<<"\n";
   cout<<"remove the element less than key 3\n";
   g1.erase(g1.begin(),g1.find(3));
   cout<<"list the all elements in map\n";
   for(it=g1.begin();it!=g1.end();++it)
   {
       cout<<"\t"<<it->first<<"\t"<<it->second;
       cout<<"\n";
   }
   cout<<"\n";
   int num = g1.erase(4);
   cout<<"removed element is = "<<num<<"\n";
   for(it=g1.begin();it!=g1.end();++it)
   {
       cout<<"\t"<<it->first<<"\t"<<it->second;
       cout<<"\n";
   }
   cout<<"\n";
    return 0;
}

