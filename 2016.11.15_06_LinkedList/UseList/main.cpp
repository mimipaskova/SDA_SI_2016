#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> mylist;
    std::list<int>::iterator it;
    mylist.push_front(4);
    mylist.push_front(5);
    mylist.push_front(6);
    mylist.push_front(7);
    mylist.push_front(8);
     for (it=mylist.begin(); it!=mylist.end(); ++it)
        cout << ' ' << *it;
        cout << '\n';

    it = mylist.begin();
    it++;
    mylist.insert(it, 10);
//    cout<<mylist.size();

    for (it=mylist.begin(); it!=mylist.end(); ++it)
        cout << ' ' << *it;
        cout << '\n';
//    cout << "Hello world!" << endl;
    return 0;
}
