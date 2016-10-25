#include <iostream>
#include <stack>
#include <deque>

using namespace std;

int main()
{

    stack<int> myStack;
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);

    cout<<myStack.top()<<endl;;
    cout<<myStack.top()<<endl;
    myStack.pop();
    cout<<myStack.top()<<endl;


//    stack<char> bracketsStack;
//    bracketsStack.push('{');
//    cout<<bracketsStack.top()<<endl;;
//    cout<<bracketsStack.top()<<endl;
//    bracketsStack.pop();
//    cout<<bracketsStack.top()<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
