#include <bits/stdc++.h>
#include <numeric>
#define size 10

using namespace std;
typedef long long ll;

ll s[size], top = -1;

void push(ll data)
{
    if (top >= size - 1)
    {
        cout << "Stack overflow"
             << "\n";
    }
    else
    {
        top++;
        s[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow";
        cout << "\n";
    }
    else
    {
        top--;
    }
}

ll peek()
{
    if (top == -1)
    {
        cout << "Stack underflow";
        cout << "\n";
    }
    else
    {
        // cout << s[top];
        // cout << "\n";
        return s[top];
    }
}

void display()
{
    for (ll i = 0; i <= top; i++)
    {
        cout << s[i] << " ";
    }
    cout << "\n";
}

int main()
{
    push(450);
    push(750);
    push(1950);
    cout << peek() << "\n";
    display();
}
