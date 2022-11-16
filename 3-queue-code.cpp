#include <bits/stdc++.h>
#include <numeric>
#define size 10
using namespace std;
typedef long long ll;

ll q[size], front = -1, rear = -1;

void push(ll data)
{
    if (rear == size - 1)
    {
        cout << "q is full"
             << "\n";
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        q[rear] = data;
    }
}

void pop()
{
    if (front == -1 || front > rear)
    {
        cout << "underflow"
             << "\n";
    }
    else
    {
        front++;
    }
}

void peek()
{
    if (front == -1 || front > rear)
        cout << "Underflow";
    else
    {
        cout << q[front];
    }
}

void display()
{
    for (ll i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }
}

int main()
{
    push(400);
    push(400);
    push(400);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
}
