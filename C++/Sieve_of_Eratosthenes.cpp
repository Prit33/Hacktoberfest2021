//Sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so.
// Input : n =10
// Output : 2 3 5 7 

// Input : n = 20 
// Output: 2 3 5 7 11 13 17 19

// Time complexity : O(n*log(log(n))) 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio
int main()
{
    ios_base::sync_with_stdio(false);
    fastio
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    bool a[n + 1];

    memset(a, true, sizeof(a));     //intializing all array elements as true

    for (int p = 2; p * p <= n; p++)
    {
        if (a[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                a[i] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i])
        {
            cout << i << " ";
        }
    }
}
