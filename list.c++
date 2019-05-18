#include<iostream>
#include<list>
#include<iterator>
using namespace std;

//function to print the all element in list

void showlist(list<int> g)
{
    list<int> :: iterator it;
    for(it=g.begin();it!=g.end();++it)
    {
        cout<<" "<<*it;
    }
    cout<<"\n";
}
int main()
{
    list<int> gqlist1,gqlist2;
    for(int i=0;i<10;i++)
    {
        gqlist1.push_back(i*2);
        gqlist2.push_front(i*3);
    }    
    cout<<"first list elements:";
    showlist(gqlist1);
    
    cout<<"second list elements:";
    showlist(gqlist2);
    
    cout<<"first list back:"<<gqlist1.back();
    cout<<"first list front:"<<gqlist1.front();
    
    cout<<"first list pop front:";
    gqlist1.pop_front();
    showlist(gqlist1);
    
    cout<<"second list pop back:";
    gqlist2.pop_back();
    showlist(gqlist2);
    
    cout<<"reverse element in first list:";
    gqlist1.reverse();
    showlist(gqlist1);
    
    cout<<"reverse element in second list:";
    gqlist2.reverse();
    showlist(gqlist2);
    
    return 0;
    
    
    
}
