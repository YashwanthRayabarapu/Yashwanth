#include <bits/stdc++.h>
using namespace std;
int minimumAdjacentDifference(int a[],int n, int k)
{
    int MI = INT_MAX;
    for (int i = 0; i <= k; i++) {
        int MA = INT_MIN;
        for (int j = 0; j < n - k - 1; j++) {
            for (int p = i; p <= i + j; p++) {
                MA = max(MA, a[p + 1] - a[p]);
            }
        }
        MI = min(MI, MA);
    }
    return MI;
}

int main()
{
    int n = 5;
    int k = 2;

    int a[n] = { 3, 7, 8, 10, 14 };

    cout << minimumAdjacentDifference(a, n, k);
    return 0;
}
