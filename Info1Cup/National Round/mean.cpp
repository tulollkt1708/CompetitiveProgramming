/*
    mean: given a array of n elements, where at each step you take 2 consecutive elements, 
find the integer part of their arithmetical mean and put that mean instead of those 2 elements. 
    find the max avg one can get by optimally doing the n-1 operations

    Classical dp problem, dp[i][j] = max average number if we solved the segment [i....j]

*/

#include<bits/stdc++.h>
using namespace std;
int n;
int v[202];
int dp[202][202];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i], dp[i][i] = v[i];
    for(int i = 1; i < n; ++i)
        dp[i][i+1] = (v[i] + v[i+1]) / 2;
    for(int i = 3; i <= n; ++i)
        for(int j = 1; j + i - 1 <= n; ++j)
            for(int k = j; k < (j + i - 1); ++k)
                dp[j][j + i - 1] = max(dp[j][j + i - 1], (dp[j][k] + dp[k+1][j + i - 1]) / 2);
    cout << dp[1][n] << '\n';
    return 0;
}
