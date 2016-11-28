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

    for(int i=0;i<sizee; i++) {
        arr[i] = rand() % 100;
    }

    for(int i=0;i<sizee; i++) {
        cout<<arr[i]<<endl;
    }

    cout<<"------------"<<endl;
    for(int i=0;i<sizee; i++) {
        int minn = i;
        for(int j=i; j<sizee; j++) {
            if(arr[j] < arr[minn]) {
                swapElements(minn, j);
            }
        }
    }

    for(int i=0;i<sizee; i++) {
        cout<<arr[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
