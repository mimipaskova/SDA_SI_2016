#include <iostream>

using namespace std;

int MAX_SIZE = 100;
int queue[100];
int front = -1;
int rear = -1;


bool isEmpty()
{
    return (front == -1 && rear == -1);
}

bool IsFull()
{
	return (rear+1)%MAX_SIZE == front ? true : false;
}

// Inserts an element in queue at rear end
void Enqueue(int x)
{
	cout<<"Enqueuing "<<x<<" \n";
	if(IsFull())
	{
		cout<<"Error: Queue is Full\n";
		return;
	}
	if (isEmpty())
	{ 
Q		front = rear = 0; 
	}
	else
	{
	    rear = (rear+1)%MAX_SIZE;
	}
	queue[rear] = x;
}

// Removes an element in Queue from front end. 
void Dequeue()
{
	cout<<"Dequeuing \n";
	if(isEmpty())
	{
		cout<<"Error: Queue is Empty\n";
		return;
	}
	else if(front == rear ) 
	{
		rear = front = -1;
	}
	else
	{
		front = (front+1)%MAX_SIZE;
	}
}
// Returns element at front of queue. 
int Front()
{
	if(front == -1)
	{
		cout<<"Error: cannot return front from empty queue\n";
		return -1; 
	}
	return queue[front];
}

void Print()
{
	// Finding number of elements in queue  
	int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
	cout<<"Queue       : ";
	for(int i = 0; i <count; i++)
	{
		int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front
		cout<<queue[index]<<" ";
	}
	cout<<"\n\n";
}

int main()
{
  Enqueue(2);  
  Print();  
  Enqueue(4);  
  Print();  
  Enqueue(6);  
  Print();
  Dequeue();	  
  Print();
  Enqueue(8);  
  Print(); 
}

return 0;
