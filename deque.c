#include <iostream>
#include<deque>

using namespace std;

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for(it = g.begin();it != g.end() ; ++it)
    {
        cout<<"\t"<<*it;
    }
    cout<<"\n";
}
int main()
{
    deque <int> g1;
    g1.push_back(10);
    g1.push_front(20);
    g1.push_back(30);
    g1.push_front(15);
    cout<<"the deques all element :";
    showdq(g1);
    return 0;
}

