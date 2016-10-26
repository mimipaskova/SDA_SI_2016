#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int a;
    cout<<"Cin a";
    cin>>a;
    stack<int> decimal;
    int ost;
    do {
        ost = a%2;
        decimal.push(ost);
        a=a/2;
    } while (a>0);

//    decimal.push(a);

    while(!decimal.empty()) {
        cout<<decimal.top();
        decimal.pop();
    }
//    cout << "Hello world!" << endl;
    return 0;
}
