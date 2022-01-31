#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPrime(ll n);

int main()
{
    ll t;
    scanf("%lld", &t);
    ll temp[1000001];
    temp[0] = temp[1] = 0;
    ll count = 0;
    for (ll i = 2, n = 1000001; i < n; i++)
    {
        if (isPrime(i))
            count++;
        temp[i] = count;
    }
    while (t--)
    {
        ll x, y;
        scanf("%lld%lld", &x, &y);
        if (temp[x] <= y)
            printf("Chef\n");
        else
            printf("Divyam\n");
    }
    return 0;
}

bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}