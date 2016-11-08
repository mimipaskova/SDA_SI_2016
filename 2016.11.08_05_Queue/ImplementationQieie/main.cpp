#include <iostream>

using namespace std;

int MAX_SIZE = 4;
int que[4];
int frontt = -1;
int rear = -1;

bool isEmpty()
{
    if(frontt == rear && frontt == -1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if((rear +1) % MAX_SIZE == frontt)
    {
        return true;
    }
    return false;
}

// Insert element
void Enqueue(int x)
{
    if(isFull())
    {
        cout<<"Sorry it's full"<<endl;
        return;
    }
    if(isEmpty())
    {
        frontt = rear = 0;
    } else
    {
        rear ++;
    }
    que[rear] = x;
}

// Remove element
void Dequeue()
{
    if(isEmpty())
    {
        cout<<"Sorry it's empty"<<endl;
        return;
    } else if(frontt == rear)
    {
        frontt = rear = -1;
    } else
    {
        frontt ++;
    }
}

int Front()
{
    if(isEmpty())
    {
        cout<<"It's Empty"<<endl;
        return -1;
    }
    return que[frontt];
}

void Print()
{
	// Finding number of elements in queue
	int count = (rear+MAX_SIZE-frontt)%MAX_SIZE + 1;
	cout<<"Queue       : ";
	for(int i = 0; i <count; i++)
	{
		int index = (frontt+i) % MAX_SIZE; // Index of element while travesing circularly from front
		cout<<que[index]<<" ";
	}
	cout<<"\n\n";
}


int main()
{
    cout<<isEmpty()<<endl;
    Enqueue(2);
    cout<<isEmpty()<<endl;
  Print();
  Enqueue(4);
  Print();
  Enqueue(6);
  Enqueue(10);
  Print();
  cout<<isFull()<<endl;
  Enqueue(11);
  Dequeue();
  cout<<isFull()<<endl;
  Print();
  Enqueue(8);
  cout<<isFull()<<endl;
  Print();
    cout << "Hello world!" << endl;
    return 0;
}
