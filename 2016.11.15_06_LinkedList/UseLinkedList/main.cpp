#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> mylist;
    mylist.push_front(5);
    mylist.push_front(6);
    mylist.push_front(7);
    cout<<mylist.size()<<endl;

    list<int>::iterator it;
    it = mylist.begin();
    it++;
    mylist.insert(it, 10);
    it--;

    for (it=mylist.begin(); it!=mylist.end(); ++it)
    {
        cout<<*it<<endl;
    }

     mylist.insert (it,10,20);

    mylist.pop_front();
    cout<<"---"<<endl;

        for (it=mylist.begin(); it!=mylist.end(); ++it)
    {
        cout<<*it<<endl;
    }

//    cout<<*it<<endl;

    return 0;
}
