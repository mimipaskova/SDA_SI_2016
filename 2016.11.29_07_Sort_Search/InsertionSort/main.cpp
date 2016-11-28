#include <iostream>
#include <stdlib.h>

using namespace std;

int arr[100];

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

    for(int i = 1; i<sizee; i++) {
        int index = arr[i];
        int sortPart = i;

        while(sortPart> 0 && arr[sortPart-1]>= index)
        {
            arr[sortPart] = arr[sortPart - 1];
            sortPart--;
        }
        arr[sortPart] = index;
    }

    for(int i=0;i<sizee; i++) {
        cout<<arr[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
