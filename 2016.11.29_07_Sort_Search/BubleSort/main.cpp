#include <iostream>
#include <stdlib.h>

using namespace std;

int arr[100];

void swapElements(int a, int b) {
    int c = arr[a];
    arr[a] = arr[b];
    arr[b] = c;
}

int main()
{
    int sizee = 10;
    for(int i = 0; i < sizee; i++) {
        arr[i] = rand() % 100;
    }
    for(int i = 0; i < sizee; i++) {
        cout<<arr[i]<<endl;
    }

    for(int i = 0; i < sizee; i++) {
        for(int j = 0; j< sizee; j++) {
            if(arr[i] < arr[j]) {
                swapElements(i,j);
            }
        }
    }

    cout<<"--------"<<endl;
    for(int i = 0; i < sizee; i++) {
        cout<<arr[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
