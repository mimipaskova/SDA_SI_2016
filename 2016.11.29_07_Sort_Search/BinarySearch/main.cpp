#include <iostream>

using namespace std;

int arr[100];

int binarySearch(int x, int beginn, int endd) {
    int centerEl = arr[(beginn + endd)/2];
    if(x == centerEl) {
        return (beginn + endd) /2;
    }
    if(beginn + 1 == endd) {
        return -1;
    }

    if(x < centerEl) {
        binarySearch(x, beginn, (beginn + endd) /2 );
    } else {
        binarySearch(x, (beginn + endd)/2 , endd);
    }
}

int main()
{
    int sizee = 10;
    for(int i = 0; i<sizee; i++) {
        arr[i] = i+10;
    }
    cout<< binarySearch(10, 0, 10)<<endl;
    cout<< binarySearch(14, 0, 10)<<endl;
    cout<< binarySearch(15, 0, 10)<<endl;
    cout<< binarySearch(20, 0, 10)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
