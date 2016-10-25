#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{

//    deque<int> d(3,5);
    vector<int> d;
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

    cout<<d.size()<<endl;
    for(int i=0;i<d.size(); i++) {
        cout<<d[i];
    }
    cout<<"--------"<<endl;
    for(auto it=d.begin(); it!=d.end(); it++) {
        cout<<*it;
    }
    cout<<"--------"<<endl;
    for(auto & it: d) {
        cout<<it;
    }
    cout << "Hello world!" << endl;
    return 0;
}
