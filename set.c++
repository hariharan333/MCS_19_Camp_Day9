#include <iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
   
    set <int,greater<int>> g;
    g.insert(10);
    g.insert(20);
    g.insert(30);
    g.insert(40);
    g.insert(50);
    g.insert(50);
    
    cout<<"print the set g:";
    set<int,greater<int>> :: iterator it;
    for(it = g.begin();it!=g.end();++it)
    {
        cout<<"\t"<<*it;
    }
    cout<<"\n";
    cout<<"assigning the element from g to g1\n"; 
    set <int>g1(g.begin(),g.end());
    cout<<"print all of g1\n";
    for(it=g1.begin();it!=g1.end();++it)
    {
        cout<<"\t"<<*it;
    }
    cout<<"\n";
    g1.erase(g1.begin(),g1.find(30));
    for(it=g1.begin();it!=g1.end();++it)
    {
        cout<<"\t"<<*it;
    }
    cout<<"\n";
    cout<<"remove element with value 50 in g1\n";
    int num;
    num = g1.erase(50);
    cout<<"removed element is = "<<num<<"\n";
    for(it = g1.begin();it!=g1.end();++it)
    {
        cout<<"\t"<<*it;
    }
    return 0;
}

