#include <iostream>

using namespace std;

int CAPACITY = 5;

int main()
{
    int *dArray;
    dArray = new int[CAPACITY];

    int n = 7;

    dArray[0] = 1;
    dArray[1] = 3;
    dArray[2] = 6;
    dArray[3] = 4;
    dArray[4] = 1;
    dArray[5] = 3;
    dArray[6] = 6;
    dArray[7] = 4;

    for(int i=0; i<n; i++) {
        cout<<dArray[i]<<endl;
    }

    cout << "Hello world!" << endl;

    int arr[100];
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 6;
    arr[3] = 4;

    for(int i=0; i<n; i++) {
//        cout<<arr[i]<<endl;
    }

    return 0;
}
