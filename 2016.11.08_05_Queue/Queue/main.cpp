#include <iostream>
#include <queue>
#include <deque>

using namespace std;




int main()
{
    deque <int> deq;
    queue<int> first;
    first.push(5);
    first.push(10);
    first.push(15);
    first.push(20);
    cout<<first.back();
    first.
    while(first.size() > 0)
//    while(!first.empty())
    {
        cout<<first.front()<<endl;
        first.pop();
    }
//    cout<< first.size()<<endl;

//    cout<<first.front()<<endl;
//    cout<< first.size()<<endl;
//    cout << "Hello world!" << endl;
    return 0;
}
