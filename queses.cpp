#include <iostream>
using namespace std;
#define N 5
int dequeue[N];
int front = -1, rear = -1;

void enquefront(int x)
{
    if ((front == 0 && rear == N - 1) || (front == rear + 1))
    {
        cout << "Queue is full"<<" "<<endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue[front] = x;
    }
    else if (front == 0)
    {
        front = N - 1;
        dequeue[front] = x;
    }
    else
    {
        front--;
        dequeue[front] = x;
    }
}

void enquerear(int x)
{
    if ((front == 0 && rear == N - 1) || (front == rear + 1))
    {
        cout << "Queue is full"<<" "<<endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        dequeue[rear] = x;
    }
    else if (rear == N - 1)
    {
        rear = 0;
        dequeue[rear] = x;
    }
    else
    {
        rear++;
        dequeue[rear] = x;
    }
}

void display()
{
    int i = front;
    while (i != rear)
    {
        cout << dequeue[i] << " ";
        i = (i + 1) % N;
    }
    cout << dequeue[i]<<endl;
}

void getfront()
{
	if (front == -1 && rear == -1)
    {
        cout << "Queue is empty"<<" ";
    }
    cout << dequeue[front];
}

void getrear()
{
	if (front == -1 && rear == -1)
    {
        cout << "Queue is empty";
    }
    cout << dequeue[rear];
}

void dequefront()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty"<<endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == N - 1)
    {
        cout << dequeue[front];
        front = 0;
    }
    else
    {
        cout << dequeue[front];
        front++;
    }
}

void dequerear()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty"<<endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        cout << dequeue[rear];
        rear = N - 1;
    }
    else
    {
        cout << dequeue[rear];
        rear--;
    }
}

int main()
{
    /*enquefront(2);
    enquefront(5);
    enquerear(-1);
    enquerear(0);
    enquefront(7);
    enquefront(4);*/
    display();

    return 0;




	
}