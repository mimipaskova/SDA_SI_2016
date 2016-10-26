#include <iostream>
#include <stack>
#include <deque>

using namespace std;

int main()
{

    stack<int> myStack;
    cout<<myStack.size()<<endl;
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    cout<<myStack.size()<<endl;


    std::stack<int> foo,bar;
    foo.push (10); foo.push(20); foo.push(30);
    bar.push (111); bar.push(222);

    foo.swap(bar);

    std::cout << "size of foo: " << foo.size() << '\n';
    std::cout << "size of bar: " << bar.size() << '\n';

    cout<<myStack.top()<<endl;;
    cout<<myStack.top()<<endl;
    myStack.pop();
    cout<<myStack.size()<<endl;
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
