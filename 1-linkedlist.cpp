#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;
ll M = 1e9 + 7;
ll M2 = 1e6 + 3;

class node
{
public:
    ll data;
    node *link;
};

node *head = NULL, *temp;

void insertion(ll data)
{
    node *ptr = new node();

    ptr->data = data;
    ptr->link = NULL;

    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        temp->link = ptr;
    }
    temp = ptr;
}

void traverse()
{
    node *srt = head;
    while (1)
    {
        cout << srt->data << " ";
        if (srt->link == NULL)
        {
            cout << "\n";
            return;
        }
        srt = srt->link;
    }
}

void deletetion()
{
    node *srt = head;
    while (1)
    {
        if (srt->link == NULL)
            break;
        temp = srt;
        srt = srt->link;
    }
    temp->link = NULL;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    insertion(30);
    insertion(35);
    insertion(50);
    insertion(85);
    traverse();
}

ll binExp(ll n, ll p)
{
    ll res = 1;
    while (p > 0)
    {
        if (p & 1)
        {
            res = (res * n) % M;
        }
        n = (n * n) % M;
        p = p >> 1;
    }
    return res % M;
}
